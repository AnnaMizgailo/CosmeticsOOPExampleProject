#include "Brand.h"
#include "Manager.h"
#include <cstdio>

const string mainFileName = "C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt";
const string fileName = "C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/rubbish.txt";


Brand::Brand() {
	/*ofstream fout;
	fout.open(mainFileName, ios_base::app);*/
	brand = "no name";
	count = 0;
	list = NULL;
	/*fout << brand << endl;
	fout.close();*/
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

Brand::Brand(const Brand& src) {
	brand = src.brand;
	count = src.count;
    list = new Cosmetics[count];
	for (int i = 0; i < count; i++) {
		list[i] = src.list[i];
	}

}

Brand::~Brand() {
	delete[] list;
}



string Brand::getBrand() {
	if (Manager::checkBrand(brand)) {
		return brand;
	}	
	return "this brand was deleted :<";
}
void Brand::setBrand(string brand) {
	if (Manager::checkBrand(brand)) {
		this->brand = brand;
	}
	else {
		cout << "this brand was deleted :<" << endl;
	}
	
}
int Brand::getCount() {
	if (Manager::checkBrand(brand)) {
		return count;
	}
	return 0;
}
Cosmetics Brand::get(int index) {
	if (Manager::checkBrand(brand)) {
		if (index < 0 || index >= count || list != NULL) {
			return Cosmetics();
		}
		return list[index];
	}
	return list[NULL];
}

void Brand::add(Cosmetics cosmetics) {
	if (Manager::checkBrand(brand)) {
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
		/*string buf = "\t" + cosmetics.getName() + ": expiring year: " + to_string(cosmetics.getExpiringYear()) + "; rating = " + to_string(cosmetics.getRating()) + "; cost = " + to_string(cosmetics.getCost()) + "; cruelty free - " + to_string(cosmetics.getCruelty_free()) + "; vegan - " + to_string(cosmetics.getVegan());
		ofstream fout;
		ifstream fin;
		fout.open("C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt");
		fin.open("C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt");
		while (!fin.eof()) {
			if (!fin.eof()) {
				fout << buf << endl;
			}
		}*/
		

	
	
	}else {
		cout << "this brand was deleted :<" << endl;
	}
	
}
void Brand::remove(int index) {
	if (Manager::checkBrand(brand)) {
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
	else {
		cout << "this brand was deleted :<" << endl;
	}
	
}

string Brand::getInfo() {
	if (Manager::checkBrand(brand)) {
		if (list == NULL) {
			return "Brand" + brand + " is empty";
		}
		string msg = "Brand " + brand + ":\n";
		for (int i = 0; i < count; i++) {
			msg += list[i].getInfo() + "\n";
		}
		return msg;
	}
	return "this brand was deleted";
	
}

Brand Brand::creatingBrand() {
	string brand;
	cout << "Enter name of brand:" << endl;
	cin >> brand;
	return Brand(brand);
	ofstream fout;
	fout.open("C:/Users/Lenovo/Desktop/STEP/С++/GitHubProject/NewChapter4/data.txt");
	
	
	

}