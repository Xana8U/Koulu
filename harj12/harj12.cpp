#include <iostream>
using namespace std;


void main() {
	int luku;
	cout << "Anna kokonaisluku 0-9 v�lilta: ";
	cin >> luku;
	for (int i = 1; i <= luku; i++) {
		for (int b = 1; b <= i; b++) {
			cout << i;
		}
		cout << endl;
	}
	system("pause");
}