#include "Header.h"
#include "Brand.h" 
#include "Manager.h" 
#include "Cosmetics.h" 
#include "TopProduct.h" 
int main() {
	Brand brand("NYX");
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

	Manager::sortByNameDesc(brand);
	cout << scs5.getInfo();
}
