#include <iostream>
using namespace std;

int main() {

	int a, b, summ = 0;
	cout << "Enter a number: ";
	cin >> b;

	for (a = 0; a <= b; summ += a++);
	cout << "The summ is: " << summ;

	return 0;
}