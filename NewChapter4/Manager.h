#pragma once
#include "Brand.h"
class Manager{

public:
	void sortByNameAcs(Brand brand);
	void sortByNameDesc(Brand brand);

	void sortByCostAcs(Brand brand);
	void sortByCostDesc(Brand brand);

	static void sortByRatingAcs(Brand brand);
	static void sortByRatingDesc(Brand brand);

	double calcAvgCost(Brand brand);
	double calcAvgRating(Brand brand);

	bool checkProduct(Brand brand, Cosmetics cosmetics);
	int countOfProductsWithCostGreaterThan(Brand brand, double cost);
	int countOfProductsWithCostLessThan(Brand brand, double cost);



};

