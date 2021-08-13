#include <iostream>
using namespace std;

int main() {

	char letter;

	cout << "Enter a letter: ";
	cin >> letter;

	for(letter; letter <= 'Z'; letter++)
		cout << letter << "  ";

	return 0;
}