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
		return Cosmetics("", 0, 0);
	}
	return list[index];
}

void Brand::add(Cosmetics cosmetics) {
	if (list == NULL) {
		lit = new Student;
		count = 1;
		list[0] = Student;
	}
	else {
		Student* temp = new Student[count + 1];
		int i = 0;
		for (; i < count; i++) {
			temp[i] = list[i];
		}
		temp[i] = cosmetics;
		delete[] list;
		list = temp;
	}
}

string Brand::getInfo() {
	if (list == NULL) {
		return "Brand" + brand + " is empty";
	}
	string msg = "Brand " + name + ":\n";
	for (int i = 0; i < count; i++) {
		msg += list->getInfo() + "\n";
	}
	return msg;
}