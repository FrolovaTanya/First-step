#include <iostream>
using namespace std;

int main() {

	int a, r;
	r = rand();
	for (a = 0; r <= 20000; a++) {
		r = rand();
	}
	cout << "The number is " << r << " on the " << a << "th step";
	return 0;
}