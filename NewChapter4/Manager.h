#pragma once
#include "Brand.h"
class Manager{

public:
	void sortByNameAcs(Brand brand);
	void sortByNameDesc(Brand brand);

	void sortByCostAcs(Brand brand);
	void sortByCostDesc(Brand brand);

	void sortByRatingAcs(Brand brand);
	void sortByRatingDesc(Brand brand);

	double calcAvgCost(Brand brand);
	double calcAvgRating(Brand brand);

	bool checkProduct(Brand brand, Cosmetics cosmetics);
	int countOfProductWithCostGreaterThan(Brand brand, double cost);
	int countOfProductWithCostLessThan(Brand brand, double cost);



};

