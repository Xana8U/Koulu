#include <iostream>
using namespace std;


void laskut(float, float);
int pos;
int neg;
float negatiivitulos;
float positiivitulos;
int main(void) {
	int in;
	pos = 0;
	neg = 0;

	for (int i = 0; i < 100; i++) {
		cin >> in;
		if (in > 0) {
			pos = pos + 1;
		}
		else if (in < 0) {
			neg = neg + 1;
		}
		else {
			printf("TULOKSET \n");
			break;
		}
	}
	cout << pos << neg;
	laskut(neg, pos);

	cout << "Syotit kokonaislukuja seuraavasti:" << endl;
	cout << "----------------------------------" << endl;
	cout << "Negatiiviset " << neg << " kpl " << negatiivitulos << "%" << endl;
	cout << "Positiiviset " << pos << " kpl " << positiivitulos << "%" << endl;
	cout << "Yhteensä " << neg + pos << " kpl 100.00%" << endl;

	system("pause");
}

void laskut(float luku1, float luku2) {
	float yhteensä;
	yhteensä = luku1 + luku2;
	negatiivitulos = neg / yhteensä * 100;
	positiivitulos = pos / yhteensä * 100;
}