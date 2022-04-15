#include "Header.h"
#include "Brand.h" 
#include "Manager.h" 


void changeRating(Cosmetics &cosmetics) {
	srand(time(NULL));
	cosmetics.rating = rand() % 10 + 1;
}

int main() {
	Brand brand("NYX");
	Cosmetics cs("foundation", 2024, 10, 10.99, true, true);
	Cosmetics cs1("mascara", 2023, 8, 3.99, false, true);
	Cosmetics cs2("blush", 2023, 9, 5.99, false, true);
	Cosmetics cs3("concealer", 2025, 10, 3.89, true, false);
	
	brand.add(cs);
	brand.add(cs1);
	brand.add(cs2);
	brand.add(cs3);

	/*cout << brand.getInfo()<<endl;
	cout << Cosmetics::getCount()<<endl;*/
	Manager::sortByRatingAcs(brand);
}
