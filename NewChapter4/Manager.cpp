#include "Manager.h"

void Manager::sortByNameAcs(Brand brand) {

}
void Manager::sortByNameDesc(Brand brand) {

}

void Manager::sortByCostAcs(Brand brand) {

}
void Manager::sortByCostDesc(Brand brand) {

}

void Manager::sortByRatingAcs(Brand brand) {
	Brand* temp = new Brand[brand.count];
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - i; j++) {
			if (brand.list[j].getRating() > brand.list[j + 1].getRating()) {
				temp->list[j] = brand.list[j + 1];
				temp->list[j + 1] = brand.list[j];
			}
		}
	}
	cout << temp->getInfo() << endl;
}
void Manager::sortByRatingDesc(Brand brand) {

}

double Manager::calcAvgCost(Brand brand){
	double avg = 0;
	for (int i = 0; i < brand.count; i++) {
		avg += brand.list[i].getCost();
	}
	return avg / brand.count;
}
double Manager::calcAvgRating(Brand brand) {
	double avg = 0;
	for (int i = 0; i < brand.count; i++) {
		avg += brand.list[i].getRating();
	}
	return avg / brand.count;
}

bool Manager::checkProduct(Brand brand, Cosmetics cosmetics) {
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getName() == cosmetics.getName()) {
			return true;
		}
		return false;
	}
}

int Manager::countOfProductsWithCostGreaterThan(Brand brand, double cost) {
	int count = 0;
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getCost() > cost) {
			count++;
		}
	}
	return cost;
}
int Manager::countOfProductsWithCostLessThan(Brand brand, double cost) {
	int count = 0;
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getCost() < cost) {
			count++;
		}	
	}
	return cost;
}
