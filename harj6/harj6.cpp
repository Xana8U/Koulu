#include <iostream>
using namespace std;

int main() {
	float raha;
	float hinta;

	cout << "Paljon sulla on rahaa?: " << endl;
	cin >> raha;
	cout << "Paljo lihis maksaa?:" << endl;
	cin >> hinta;

	if (raha >= hinta) {
		raha -= hinta;
		cout << "sinulle j�i rahaa " << raha << "�" << endl;
		system("pause");
	}
	else {
		cout << "Mit� jos paastoaisit kerran lihikseenk��n ei ole varaa OwO" << endl;
		system("pause");
	}
}