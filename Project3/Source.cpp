#include <iostream>
using namespace std;

int main() {
	int i, j;
	int sqrs[10][2] = { {1,1},{2,4},{3,9},{4,16},{5,25},{6,36} };

	cout << "Enter a number from 1 to 6: ";
	cin >> i;

	for ( j = 0; j < 6; j++)
	{
		if (sqrs[j][0] == i) break;
	}
	cout << "Square for " << i << " is " << sqrs[j][1];
	
	return 0;
}