#include <iostream>
using namespace std;

int main() {

	double a, b, z;

	cout << "Enter legs: ";
	cin >> a >> b;
	
	z = sqrt(a * a + b * b);

	cout << "Hypotenuse: " << z;

	return 0;
}