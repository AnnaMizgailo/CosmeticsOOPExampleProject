#pragma once
#include "Brand.h"

class Manager {

public:
	static void sortByNameAcs(Brand& brand);
	static void sortByNameDesc(Brand& brand);

	static void sortByCostAcs(Brand& brand);
	static void sortByCostDesc(Brand& brand);

	static void sortByRatingAcs(Brand& brand);
	static void sortByRatingDesc(Brand& brand);

	static double calcAvgCost(Brand& brand);
	static double calcAvgRating(Brand& brand);

	static bool checkBrand(string brand);
	static void deleteBrand(string brand);
	static bool checkProduct(Brand& brand, Cosmetics& cosmetics);
	static int countOfProductsWithCostGreaterThan(Brand& brand, double cost);
	static int countOfProductsWithCostLessThan(Brand& brand, double cost);





};

