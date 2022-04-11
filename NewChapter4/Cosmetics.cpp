#include "Cosmetics.h"

Cosmetics::Cosmetics() {
	name = "no name";
	expiringYear = 2022;
	rating = 0;
	cost = 0;
	vegan = false;
	cruelty_free = false;
}
Cosmetics::Cosmetics(string name, int expiringYear, int rating, double cost, bool vegan, bool cruelty_free) {
	this->name = name;
	this->expiringYear = expiringYear;
	this->rating = rating;
	this->cost = cost;
	this->vegan = vegan;
	this->cruelty_free = cruelty_free;
}
Cosmetics::~Cosmetics() {

}
string Cosmetics::getName() {
	return name;
}
void Cosmetics::setName(string name) {
	this->name = name;
}
int Cosmetics::getCost() {
	return cost;
}
void Cosmetics::setCost(int cost) {
	if (cost >= 0 && cost <= 1000000) {
		this->cost= cost;
	}
}
int Cosmetics::getRating() {
	return rating;
}
void Cosmetics::setRating(int rating) {
	if (cost >= 0 && cost <= 1000000) {
		this->cost = cost;
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