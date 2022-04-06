#include "Cosmetics.h"

Cosmetics::Cosmetics() {
	name = "no name";
	expiringYear = 2022;
	rating = 0;
	cost = 0;
}
Cosmetics::Cosmetics(string name, int expiringYear, int rating, double cost) {
	this->name = name;
	this->expiringYear = expiringYear;
	this->rating = rating;
	this->cost = cost;
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
string Cosmetics::getInfo() {
	return name + ": expiring year = " + to_string(expiringYear) + "; rating = " + to_string(rating) + "; cost: " + to_string(cost);
}