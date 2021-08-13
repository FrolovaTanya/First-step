#include <iostream>
using namespace std;

int main() {

	double a1, a2, a3, a4, a5, middle;

	cout << "Numbers: ";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;

	middle = (a1 + a2 + a3 + a4 + a5) / 5;

	//cout << a2 << a1;

	cout << "Average value: " << middle;

	return 0;
}