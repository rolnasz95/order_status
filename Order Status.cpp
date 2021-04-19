#include <iostream>

void getOrder(int&, int&, int&);
void displayOrder(int, int, int);

int main()
{
	int orderAmount{}, orderStock{}, specialCharge{};

	getOrder(orderAmount, orderStock, specialCharge);
	displayOrder(orderAmount, orderStock, specialCharge);

	return 0;
}