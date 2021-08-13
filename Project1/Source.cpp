#include <iostream>
using namespace std;

int main() {

	int magic, guess;

	magic = rand();
	//cout << magic;
	cout << "Enter your guess: ";
	do {
		cin >> guess;
		if (guess < magic) {
			cout << "Too few. Try one more time: ";
		}
		else if (guess > magic) {
			cout << "Too much. Try more: ";
		}
		else if (guess == magic) {
			cout << "Your right. The magic naumber is " << magic;
		}

	} while (guess != magic);
}
