#include "Header.h"
#include "Brand.h" 
#include "Manager.h" 
#include "Cosmetics.h" 
#include "TopProduct.h" 



void start() {
	int start;
	cout << "Welcome to your cosmetics brand simulator ^-^" << endl;
	cout << "See what you can do -> 1" << endl;
	cout << "Start creating your personal cosmetics universe -> any digit(!!!!)" << endl;
	cin >> start;
	switch (start) {
	case 1:
		cout << "\nYou will have a lot of benefits if you start using our simulator." << endl;
		cout << "You can:" << endl;
		cout << " - run your own cosmetics brand" << endl;
		cout << " - add and remove cosmetics items from your brand" << endl;
		cout << " - sort your items by cost, rating, expiring year, etc." << endl;
		cout << " - make and promote top products " << endl;
		cout << " - and some other functions we sure you estimate;)" << endl;
		cout << "**********************************************************************************" << endl;
		cout << "let's get started!" << endl;
		system("pause");
		break;
	default:
		cout << "It's great that you know already everything:0" << endl;
		system("pause");
		break;
	}
	


	

}
void menu() {
	int mainUserChoice = 0, userChoice2, i = 0, j = 0, k = 0;
	Cosmetics* cs = new Cosmetics[256];
	Cosmetics cos;
	TopProduct top;
	Brand* br = new Brand[256];
	TopProduct* tp = new TopProduct[256];
	cout << "Finally you can do whatever you want" << endl;
	cout << "Don't be shy, let's creativity take over you!" << endl;
	cout << "*********************************************" << endl;
	while (mainUserChoice != 8) {
		cout << "Create new cosmetics item -> 1" << endl;
		cout << "Create new brand -> 2" << endl;
		cout << "Create top product -> 3" << endl;
		cout << "Delete an existing item -> 4" << endl;
		cout << "Change an existing item -> 5" << endl;
		cout << "Add your items to the brand -> 6" << endl;
		cout << "Show info -> 7" << endl;
		cout << "Exit -> 8" << endl;
		cin >> mainUserChoice;
		cout << "*********************************************" << endl;
		switch (mainUserChoice) {
		case 1:
			cs[i] = Cosmetics::creatingCosmetics();
			i++;
			cout << "Item created successfuly!" << endl;
			break;
		case 2:
			br[j] = Brand::creatingBrand();
			j++;
			cout << "Brand created successfuly!" << endl;
			break;
		case 3:
			tp[k] = TopProduct::creatingTopProduct();
			k++;
			cout << "Item created successfuly!" << endl;
			break;
		case 4:
			int ans, index;
			cout << "Choose an item to delete: " << endl;
			cout << "1. Cosmetics" << endl;
			cout << "2. Brand" << endl;
			cout << "3. Top product" << endl;
			cin >> ans;
			if (ans == 1) {
				cout << "Enter index of cosmetics: " << endl;
				cin >> index;
				Cosmetics* cs1 = new Cosmetics[255];
				for (int k = 0, h = 0; k < i; k++) {
					if (k != index) {
						cs1[h] = cs[k];
						h++;
					}
				}
				delete[] cs;
				cs = cs1;
				cout << "Cosmetics deleted successfully" << endl;
			} else if (ans == 2) {
				cout << "Enter index of brand: " << endl;
				cin >> index;
				Brand* br1 = new Brand[255];
				for (int p = 0, h = 0; p < j; p++) {
					if (p != index) {
						br1[h] = br[p];
						h++;
					}
				}
				delete[] br;
				br = br1;
				cout << "Brand deleted successfully" << endl;
			} else if (ans == 3) {
				cout << "Enter index of top product: " << endl;
				cin >> index;
				TopProduct* tp1 = new TopProduct[255];
				for (int d = 0, h = 0; d < k; d++) {
					if (d != index) {
						tp1[h] = tp[d];
						h++;
					}
				}
				delete[] tp;
				tp = tp1;
				cout << "Top product deleted successfully" << endl;
			}
			break;
		case 5:
			int ans11, index11;
			cout << "Choose an item to change: " << endl;
			cout << "1. Cosmetics" << endl;
			cout << "2. Brand" << endl;
			cout << "3. Top Product" << endl;
			cin >> ans11;
			if (ans11 == 1) {
				int indexCase4, index2case4;
				cout << "Enter index of cosmetics: ";
				cin >> indexCase4;
				cout << "Choose what to change: " << endl;
				cout << "1. name" << endl;
				cout << "2. expiring year" << endl;
				cout << "3. rating" << endl;
				cout << "4. cost" << endl;
				cout << "5. vegan" << endl;
				cout << "6. cruelty free" << endl;
				cos.changeCosmetics(cs, indexCase4);
				cout << "Cosmetics changed successfuly" << endl;
			}
			else if (ans11 == 2) {
				string ans3;
				int index22;
				cout << "Enter index of brand: ";
				cin >> index22;
				cout << "Enter new name of brand: " << endl;
				cin >> ans3;
				br[index22].setBrand(ans3);
				cout << "Brand changed successfuly" << endl;
			}
			else if (ans11 == 3) {
				int indexCase4;
				cout << "Enter index of top product: ";
				cin >> indexCase4;
				cout << "Choose what to change: " << endl;
				cout << "1. name" << endl;
				cout << "2. expiring year" << endl;
				cout << "3. rating" << endl;
				cout << "4. cost" << endl;
				cout << "5. vegan" << endl;
				cout << "6. cruelty free" << endl;
				cout << "7. product number" << endl;
				cout << "8. skin type" << endl;
				top.changeTopProduct(tp, indexCase4);
				cout << "Top product changed successfuly" << endl;
			}		
			break;
		case 6:
			int indexCase6Brand, indexCase6Item, item6;
			cout << "Enter index of your brand: " << endl;
			cin >> indexCase6Brand;
			cout << "What would you like to add to your brand?" << endl;
			cout << "1.Cosmetics" << endl;
			cout << "2.Top product" << endl;
			cin >> indexCase6Item;
			if (indexCase6Item == 1) {
				cout << "Enter index of cosmetics: " << endl;
				cin >> item6;
				br[indexCase6Brand].add(cs[item6]);
			} else if (indexCase6Item == 2) {
				cout << "Enter index of top product: " << endl;
				cin >> item6;
				br[indexCase6Brand].add(tp[item6]);
			}
			cout << "Item successfully added" << endl;
			break;
		case 7:
			for (int h = 0; h < j; h++) {
				cout << br[h].getInfo() << endl;
			}
			break;
		}
		system("cls");
	}
	
} 

int main() {
	start();
	system("cls");
	menu();



	/*Brand brand("NYX");
	Brand brand1("BelorDesign");
	Brand brand2("Mac");
	Cosmetics cs("foundation", 2024, 10, 10.99, true, true);
	Cosmetics cs1("mascara", 2023, 8, 3.99, false, true);
	Cosmetics cs2("blush", 2023, 9, 5.99, false, true);
	Cosmetics cs3("concealer", 2025, 10, 3.89, true, false);
	Cosmetics cs4("lip gloss", 2024, 10, 12.99, true, false);
	TopProduct scs5("aqua", 2024, 10, 12.99, true, false, "010828", "sensitive");
	
	brand.add(cs);
	brand.add(cs1);
	brand.add(cs2);
	brand.add(cs3);
	Manager::deleteBrand("NYX");
	Manager::sortByNameDesc(brand1);
	cout << brand.getInfo() << endl;
	cout << scs5.getInfo() << endl;
	cout << Manager::checkBrand("BelorDesign") << endl;*/

}
