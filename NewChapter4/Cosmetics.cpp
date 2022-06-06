#include "Cosmetics.h"

int Cosmetics::count = 0;

Cosmetics::Cosmetics() {
	name = "no name";
	expiringYear = 2022;
	rating = 0;
	cost = 0;
	vegan = false;
	cruelty_free = false;
	count++;
}
Cosmetics::Cosmetics(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free) {
	count++;
	this->name = name;
	this->expiringYear = expiringYear;
	this->rating = rating;
	this->cost = cost;
	this->vegan = vegan;
	this->cruelty_free = cruelty_free;
}
Cosmetics::Cosmetics(const Cosmetics& src) {
	name = src.name;
	expiringYear = src.expiringYear;
	rating = src.rating;
	cost = src.cost;
	vegan = src.vegan;
	cruelty_free = src.cruelty_free;
}
Cosmetics::~Cosmetics() {
	count--;
}
string Cosmetics::getName() {
	return name;
}
void Cosmetics::setName(string name) {
	this->name = name;
}
double Cosmetics::getCost() {
	return cost;
}
void Cosmetics::setCost(double cost) {
	if (cost >= MIN_COST && cost <= MAX_COST) {
		this->cost= cost;
	}
}
int Cosmetics::getRating() {
	return rating;
}
void Cosmetics::setRating(int rating) {
	if (rating>= MIN_RATING && rating <= MIN_RATING) {
		this->rating = rating;
	}
}
int Cosmetics::getExpiringYear() {
	return expiringYear;
}
void Cosmetics::setExpiringYear(int expiringYear) {
	if (expiringYear >= 2000 && expiringYear <= 2099) {
		this->expiringYear = expiringYear;
	}
}
bool Cosmetics::getVegan() {
	return vegan;
}
void Cosmetics::setVegan(bool vegan) {
	this->vegan = vegan;
	
}
bool Cosmetics::getCruelty_free() {
	return cruelty_free;
}
void Cosmetics::setCruelty_free(bool vegan) {
	this->cruelty_free = cruelty_free;

}
string Cosmetics::getInfo() {
	return name + ": expiring year = " + to_string(expiringYear) + "; rating = " + to_string(rating) + "; cost: " + to_string(cost) + "; vegan: " + to_string(vegan) + "; cruelty-free: " + to_string(cruelty_free);
}

Cosmetics Cosmetics::creatingCosmetics() {
	int expiringYear, rating;
	string name;
	double cost;
	bool vegan, cruelty_free;
	cout << "Enter name, expiring year, rating, cost, if your product is vegan and cruelty_free:" << endl;
	cin >> name >> expiringYear >> rating >> cost >> vegan >> cruelty_free;
	return Cosmetics(name, expiringYear, rating, cost, vegan, cruelty_free);

}
int Cosmetics::changeCosmetics(Cosmetics* cs, int index) {
	int ans;
	cin >> ans;
	switch (ans) {
	case 1: {
		string newName;
		cout << "Enter new name: ";
		cin >> newName;
		cs[index].setName(newName);
	}
		  break;
	case 2:
		int newExp;
		cout << "Enter new expiring year: ";
		cin >> newExp;
		cs[index].setExpiringYear(newExp);
		break;
	case 3:
		int newRating;
		cout << "Enter new rating: ";
		cin >> newRating;
		cs[index].setRating(newRating);
		break;
	case 4:
		double newCost;
		cout << "Enter new cost: ";
		cin >> newCost;
		cs[index].setCost(newCost);
		break;
	case 5:
		bool newVegan;
		cout << "Enter new vegan status: ";
		cin >> newVegan;
		cs[index].setVegan(newVegan);
		break;
	case 6:
		bool newCrueltyFree;
		cout << "Enter new cruelty free status: ";
		cin >> newCrueltyFree;
		cs[index].setCruelty_free(newCrueltyFree);
		break;
	}
	return ans;
}