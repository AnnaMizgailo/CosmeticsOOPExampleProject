#include "TopProduct.h"
#include "Cosmetics.h"

int TopProduct::count = 0;

TopProduct::TopProduct() {
	productNumber = "0";
	skinType = "inidentified";
}
TopProduct::TopProduct(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free, string productNumber, string skinType) : Cosmetics(name, expiringYear, rating, cost, vegan, cruelty_free) {
	this->productNumber = productNumber;
	this->skinType = skinType;
}

TopProduct::~TopProduct() {
	count--;
}

string TopProduct::getProductNumber() {
	return productNumber;
}
void TopProduct::setProductNumber(string productNumber) {
	this->productNumber = productNumber;
}

string TopProduct::getSkinType() {
	return skinType;
}
void TopProduct::setSkinType(string skinType) {
	this->skinType = skinType;
}

string TopProduct::getInfo() {
	return Cosmetics::getInfo() + "; product number: " + productNumber + "; skin type: " + skinType;
}