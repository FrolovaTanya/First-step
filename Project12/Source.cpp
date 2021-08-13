#include <iostream>
using namespace std;

int main() {

	double a, sum, middle;
	int counter, amount;
	counter = 0;
	sum = 0;

	cout << "Amount of numbers: ";
	cin >> amount;

	cout << "Numbers: ";
	for (counter; counter < amount; counter++) {
		cin >> a;
		sum = sum + a;
	}

	middle = sum / amount;

	cout << "Average value: " << middle;

	return 0;

}