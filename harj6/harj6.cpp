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
		cout << "sinulle jäi rahaa " << raha << "€" << endl;
		system("pause");
	}
	else {
		cout << "Mitä jos paastoaisit kerran lihikseenkään ei ole varaa OwO" << endl;
		system("pause");
	}
}