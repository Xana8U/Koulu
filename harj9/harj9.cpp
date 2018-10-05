#include <iostream>
#include <conio.h>
using namespace std;


int main(void) {
	int in;
	int luku1;
	int luku2;

	cout << "Anna luku 1" << endl;
	cin >> luku1;
	cout << "Anna luku 2" << endl;
	cin >> luku2;
	cout << "Valitse haluttu laskutoimitus \n\nVALIKKO\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos" << endl;
	in = _getch();
	

	if (in == 49) {
		cout << "Tulos laskutoimitukselle on " << luku1 + luku2 << endl;
	}
	else if (in == 50) {
		cout << "Tulos laskutoimitukselle on " << luku1 - luku2 << endl;
	}
	else if (in == 51) {
		cout << "Tulos laskutoimitukselle on " << luku1 * luku2 << endl;
	}
	else if (in == 52) {
		cout << "Tulos laskutoimitukselle on " << luku1 / luku2 << endl;
	}
	else if (in == 53) {
		cout << "Tulos laskutoimitukselle on " << luku1 % luku2 << endl;
	}
	else {
		printf("Incorrect selection \n");
	}

	system("pause");
}