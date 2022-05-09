#include "Brand.h"
#include <cstdio>

const string mainFileName = "C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt";
const string fileName = "C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/rubbish.txt";


Brand::Brand() {

	brand = "no name";
	count = 0;
	list = NULL;
}
Brand::Brand(string brand) {
	ofstream fout;
	fout.open(mainFileName, ios_base::app);
	this->brand = brand;
	count = 0;
	list = NULL;
	fout << brand << endl;
	fout.close();
}
//Brand::Brand(string brand, Cosmetics* list, int count) {
//	this->brand = brand;
//	this->count = count;
//	this->list = list;
//}
Brand::~Brand() {
	ifstream fin;
	fin.open(mainFileName);
	ofstream fout;
	fout.open(fileName);
	while (fin.eof()) {
		string buf;
		fin >> buf;
		if (buf != brand) {
			fout << brand << endl;
		}
	}
	fin.close();
	fout.close();
	std::remove("C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt");

	ifstream in;
	in.open(fileName);
	ofstream out;
	out.open(mainFileName);

	while (in.eof()) {
		string buf;
		in >> buf;
		out << brand << endl;
	}
	in.close();
	out.close();
	delete[] list;
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
void Brand::remove(int index) {
	if (list != NULL && index >= 0 && index < count) {
		Cosmetics* temp = new Cosmetics[count - 1];
		for (int i = 0, j = 0; i < count; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}	
		}
		delete[] list;
		list = temp;
		count--;
	}
	
}

//void change(Cosmetics& cosmetics) {
//	srand(time(NULL));
//	cosmetics.rating = rand() % 10 + 1;
//}

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