#include "Header.h"

class Cosmetics {
private:
	static int count;
	string name;
	int expiringYear;
	int rating;
	double cost;
	bool vegan;
	bool cruelty_free;

public:

	static const int MAX_RATING = 10;
	static const int MIN_RATING=  0;

	static const int MAX_COST = 1000000;
	static const int MIN_COST = 1;

	Cosmetics();
	Cosmetics(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free);
	~Cosmetics();

	static int getCount() {
		return count;
	}

	string getName();
	void setName(string name);

	double getCost();
	void setCost(int cost);
	
	int getExpiringYear();
	void setExpiringYear(int expiringYear);
	
	int getRating();
	void setRating(int rating);
	
	bool getVegan();
	void setVegan(bool vegan);
	
	bool getCruelty_free();
	void setCruelty_free(bool cruelty_free);

	

	string getInfo();
};


