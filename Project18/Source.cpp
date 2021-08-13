#include <iostream>
using namespace std;

int main() {

	cout << "1. if\n2. switch \nChoose one: ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "if() sentence \n else sentence ";
		break;
	case 2:
		cout << "switch() {\n case const:\n some sentences\n break;\n }";
		break;
	default:
		cout << "Doesn't work";
		break;
	}

	return 0;
}