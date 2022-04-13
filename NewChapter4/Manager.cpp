#include "Manager.h"

void sortByNameAcs(Brand brand) {

}
void sortByNameDesc(Brand brand) {

}

void sortByCostAcs(Brand brand) {

}
void sortByCostDesc(Brand brand) {

}

void sortByRatingAcs(Brand brand) {

}
void sortByRatingDesc(Brand brand) {

}

//double calcAvgCost(Brand brand){
//
//}
double Manager::calcAvgRating(Brand brand) {
	double avg = 0;
	for (int i = 0; i < brand.count; i++) {
		avg += brand.list[i].getRating();
	}
	return avg / brand.count;
}
//
//bool checkProduct(Brand brand, Cosmetics cosmetics) {
//
//}
//
//int countOfProductsWithCostGreaterThan(Brand brand, double cost) {
//
//}
//int countOfProductsWithCostLessThan(Brand brand, double cost) {
//
//}
