#include "Product.h"

int main() {

	Product p1("Laptop", "Electronics", 999.99, 10);
	p1.Print();

	// глобальная перегрузка операторов дз
	++p1;// Increment quantity
	p1++;// Increment quantity

	p1--;// Decrement quantity
	--p1;// Decrement quantity

	p1 += 5000;// Increase price by 5000 +
	p1 -= 2000;// Decrease price by 2000



}