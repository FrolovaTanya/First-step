#include <iostream>
using namespace std;

int main() {

	int a;

	cout << "2 \n3 \n5 \n7 \n";
	for (a = 2; a <= 100; a++) {

		if ((a % 2 != 0) && (a % 3 != 0) && (a % 5 != 0) && (a % 7 != 0)) {
			cout << a << " \n";
		}
	}
	return 0;
}