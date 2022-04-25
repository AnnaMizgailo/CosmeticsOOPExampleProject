#pragma once
#include "Header.h"
#include "Cosmetics.h"
class TopProduct : public Cosmetics {
	private:
		static int count;
		string productNumber;
		string skinType;

	public:

		TopProduct();
		TopProduct(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free, string productNumber, string skinType);
		~TopProduct();

		static int getCount() {
			return count;
		}

		string getProductNumber();
		void setProductNumber(string productNumber);

		string getSkinType();
		void setSkinType(string skinType);

		string getInfo();
};

