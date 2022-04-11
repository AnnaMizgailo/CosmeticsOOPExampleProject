#include "Header.h"

class Cosmetics {
private:
	string name;
	int expiringYear;
	int rating;
	double cost;
	bool vegan;
	bool cruelty_free;

public:
	Cosmetics();
	Cosmetics(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free);
	~Cosmetics();
	string getName();
	void setName(string name);
	int getCost();
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


