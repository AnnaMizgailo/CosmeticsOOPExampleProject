#include "TopProduct.h"
#include "Cosmetics.h"

int TopProduct::count = 0;

TopProduct::TopProduct() : Cosmetics() {
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
TopProduct TopProduct::creatingTopProduct() {
	int expiringYear, rating;
	string name, productNum, skinType;
	double cost;
	bool vegan, cruelty_free;
	cout << "Enter name, expiring year, rating, cost, if your product is vegan and cruelty_free, product number, skin type: " << endl;
	cin >> name >> expiringYear >> rating >> cost >> vegan >> cruelty_free >> productNum >> skinType;
	return TopProduct(name, expiringYear, rating, cost, vegan, cruelty_free, productNum, skinType);
}

void TopProduct::changeTopProduct(TopProduct* tp, int index){
	int ans = changeCosmetics(tp, index);
	if (ans == 7) {
		string newProductNum;
		cout << "Enter new product number: ";
		cin >> newProductNum;
		tp[index].setProductNumber(newProductNum);
	}
	else if(ans == 8) {

		string newSkinType;
		cout << "Enter new skin type status: ";
		cin >> newSkinType;
		tp[index].setSkinType(newSkinType);
	}
	

}
