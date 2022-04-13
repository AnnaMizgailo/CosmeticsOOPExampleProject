#pragma once
#include "Header.h"
#include "Cosmetics.h"
class Brand{

	friend class Manager;
private:
	string brand;
	int count;
	Cosmetics* list;

public:
	Brand();
	Brand(string brand);
	Brand(string brand, Cosmetics* list, int count);
	~Brand();

	string getBrand();
	void setBrand(string brand);
	int getCount();
	Cosmetics get(int index);
	void add(Cosmetics cosmetics);
	void remove(int index);
	void change(Cosmetics& cosmetics);
	string getInfo();



};


