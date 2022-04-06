#include "Brand.h"

Brand::Brand() {
	brand = "no name";
	count = 0;
	list = NULL;
}
Brand::Brand(string brand) {
	this->brand = brand;
	count = 0;
	list = NULL;
}
Brand::Brand(string brand, Cosmetics* list, int count) {
	this->brand = brand;
	this->count = count;
	this->list = list;
}
Brand::~Brand() {
	if (list != NULL) {
		delete[] list;
	}
}

string Brand::getBrand() {
	return brand;
}
void Brand::setBrand(string brand) {
	this->brand = brand;
}
int Brand::getCount() {

}
Cosmetics Brand::get(int index) {
	if (index < 0 || index >= count || list != NULL) {
		return Cosmetics();
	}
	return list[index];
}

string Brand::getInfo() {
	return brand + ": ";
}