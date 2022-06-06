#include "Manager.h"
#include <cassert>

const char* mainFileName = "C:/Users/Lenovo/Desktop/STEP/Ñ++/GitHubProject/NewChapter4/data.txt";
const char* fileName = "C:/Users/Lenovo/Desktop/STEP/Ñ++/GitHubProject/NewChapter4/rubbish.txt";

void Manager::sortByNameAcs(Brand& brand) {
	const string alphabet = "abcdefghigklmnopqrstuvwxyz";
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			string buf1 = brand.list[j].getName();
			string buf2 = brand.list[j + 1].getName();
			int l1 = 0;
			while (buf1[0] != alphabet[l1]) {
				l1++;
			}
			int l2 = 0;
			while (buf2[0] != alphabet[l2]) {
				l2++;
			}
			if (l1 > l2) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;

}
void Manager::sortByNameDesc(Brand& brand) {
	const string alphabet = "abcdefghigklmnopqrstuvwxyz";
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			string buf1 = brand.list[j].getName();
			string buf2 = brand.list[j + 1].getName();
			int l1 = 0;
			while (buf1[0] != alphabet[l1]) {
				l1++;
			}
			int l2 = 0;
			while (buf2[0] != alphabet[l2]) {
				l2++;
			}
			if (l1 < l2) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;

}

void Manager::sortByCostAcs(Brand& brand) {
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			if (brand.list[j].getCost() > brand.list[j + 1].getCost()) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;
}
void Manager::sortByCostDesc(Brand& brand) {
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			if (brand.list[j].getCost() < brand.list[j + 1].getCost()) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;
}

void Manager::sortByRatingAcs(Brand& brand) {
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			if (brand.list[j].getRating() > brand.list[j + 1].getRating()) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;
}
void Manager::sortByRatingDesc(Brand& brand) {
	for (int i = 0; i < brand.count - 1; i++) {
		for (int j = 0; j < brand.count - 1 - i; j++) {
			if (brand.list[j].getRating() < brand.list[j + 1].getRating()) {
				Cosmetics temp = brand.list[j];
				brand.list[j] = brand.list[j + 1];
				brand.list[j + 1] = temp;
			}
		}
	}
	cout << brand.getInfo() << endl;
}

double Manager::calcAvgCost(Brand& brand){
	double avg = 0;
	for (int i = 0; i < brand.count; i++) {
		avg += brand.list[i].getCost();
	}
	return avg / brand.count;
}
double Manager::calcAvgRating(Brand& brand) {
	double avg = 0;
	for (int i = 0; i < brand.count; i++) {
		avg += brand.list[i].getRating();
	}
	return avg / brand.count;
}

bool Manager::checkProduct(Brand& brand, Cosmetics& cosmetics) {
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getName() == cosmetics.getName()) {
			return true;
		}
	}
	return false;
}

int Manager::countOfProductsWithCostGreaterThan(Brand& brand, double cost) {
	int count = 0;
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getCost() > cost) {
			count++;
		}
	}
	return count;
}
int Manager::countOfProductsWithCostLessThan(Brand& brand, double cost) {
	int count = 0;
	for (int i = 0; i < brand.count; i++) {
		if (brand.list[i].getCost() < cost) {
			count++;
		}	
	}
	return count;
}

bool Manager::checkBrand(string brand) {
	ifstream fin("C:/Users/Lenovo/Desktop/STEP/Ñ++/GitHubProject/NewChapter4/data.txt");
	assert(fin.is_open());

	while (!fin.eof()) {
		string buf;
		fin >> buf;
		if (buf == brand) {
			return true;
		}
	}
	return false;
}

void Manager::deleteBrand(string brand) {
	ifstream fin;
	fin.open(mainFileName);
	ofstream fout;
	fout.open(fileName, ios_base::out | ios_base::trunc);
	while (!fin.eof()) {
		string buf;
		std::getline(fin, buf);
		if (buf != brand) {
			fout << buf << endl;
		}
	}
	fin.close();
	fout.close();
	std::remove(mainFileName);
	auto res = std::rename(fileName, mainFileName);
	
	/*
	ifstream in;
	in.open(fileName);
	ofstream out;
	out.open(mainFileName);

	while (in.eof()) {
		string buf;
		in >> buf;
		out << buf << endl;
	}
	in.close();
	out.close();
	*/
}
