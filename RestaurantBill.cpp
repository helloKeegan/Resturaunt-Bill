/* Keegan Coffman
* 08/26/2022
* RestaurantBill
* This Program will calculate the total food bill + tax
*/
#include <iostream>
#include <string>

using namespace std;

// Named constants
const double TAX_PERCENT = 0.095;

int main()
{

	// Variable declaration
	double foodBill;
	double tip;
	double tax;
	double totalBill;

	//Program title and description for the user
	cout << "RestaurantBill" << endl;
	cout << "This Program will calculate the totall food bill + tax" << endl;
	cout << endl;

	// User input
	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> foodBill;
	cout << endl;

	cout << "Choose your tip: " << endl;

	cout << "for 10% tip : $" << 0.1 * foodBill << endl;
	cout << "for 15% tip : $" << 0.15 * foodBill << endl;
	cout << "for 20% tip : $" << 0.2 * foodBill << endl;

	cin >> tip;

	// Calculations
	tax = foodBill * TAX_PERCENT;
	totalBill = foodBill + tip + tax;
	// Output to the screen
	cout << "Your food bill is: $" << foodBill << endl;
	cout << "tip................$" << tip << endl;
	cout << "tax................$" << tax << endl;
	cout << "Your total bill is $" << totalBill << endl;
	cout << endl;
	cout << "Thank You!" << endl;

	return 0;
}