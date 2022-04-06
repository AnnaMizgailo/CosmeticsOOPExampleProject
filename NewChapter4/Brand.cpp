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
	return count;
}
Cosmetics Brand::get(int index) {
	if (index < 0 || index >= count || list != NULL) {
		return Cosmetics();
	}
	return list[index];
}

void Brand::add(Cosmetics cosmetics) {
	if (list == NULL) {
		list = new Cosmetics[1];
		count = 1;
		list[0] = cosmetics;
	}
	else {
		Cosmetics* temp = new Cosmetics[count + 1];
		int i = 0;
		for (; i < count; i++) {
			temp[i] = list[i];
		}
		temp[i] = cosmetics;
		delete[] list;
		list = temp;
		count++;
	}
}

string Brand::getInfo() {
	if (list == NULL) {
		return "Brand" + brand + " is empty";
	}
	string msg = "Brand " + brand + ":\n";
	for (int i = 0; i < count; i++) {
		msg += list[i].getInfo() + "\n";
	}
	return msg;
}