#include <iostream>

void getOrder(int& orderAmount, int& orderStock,int& specialCharge)
{
	std::cout << "Enter the order quantity: ";
	std::cin >> orderAmount;
	int orderA = orderAmount;

	while (orderAmount < 0)
	{
		std::cout << "Quantity must be more than 0!: ";
		std::cin >> orderAmount;
		orderA = orderAmount;
	}

	std::cout << "How many items are in stock? ";
	std::cin >> orderStock;
	int orderS = orderStock;

	while (orderStock < 0)
	{
		std::cout << "Stock cannot be 0 or less. Try again: ";
		std::cin >> orderStock;
		orderS = orderStock;
	}

	std::cout << "Is there a special shipping? Press 1 for yes, 0 for no: ";
	std::cin >> specialCharge;
	int specialCh = specialCharge;

	while (specialCharge != 0 && specialCharge != 1)
	{
		std::cout << "Press either 1 or 0.: ";
		std::cin >> specialCharge;
		specialCh = specialCharge;
	}
}

void displayOrder(int orderAmount, int orderStock, int specialCharge)
{
	int shippingFee{ 10 };
	int price{ 100 };

	if (specialCharge == 1)
	{
		std::cout << "Enter the new shipping fee: ";
		std::cin >> shippingFee;
		std::cout << "Enter the new price for each item: ";
		std::cin >> price;
	}

	if (orderAmount > orderStock)
	{
		int remaining{ orderAmount - orderStock };
		std::cout << "Orders ready to ship: " << (orderAmount - remaining) << '\n';
		std::cout << "Remaining items on back order: " << remaining << '\n';
		std::cout << "Shipping and handling charges: " << (orderAmount - remaining) * shippingFee << '\n';
		std::cout << "The subtotal of your order is: " << ((orderAmount - remaining) * price) + ((orderAmount - remaining) * shippingFee) << '\n';
	}
	else if (orderAmount < orderStock)
	{
		std::cout << "Orders ready to ship: " << orderAmount << '\n';
		std::cout << "Shipping and handling charges: " << orderAmount * shippingFee << '\n';
		std::cout << "The subtotal of your order is: " << (orderAmount * price) + (orderAmount * shippingFee) << '\n';
	}
}