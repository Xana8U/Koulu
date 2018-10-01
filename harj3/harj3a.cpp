#include <iostream>
#include <string>
using namespace std;

void main(void) {
	string etunimi = "Markus";
	string sukunimi = "Kaleton";
	string osoite = "Martantie 1";
	string postinro = "46910 Anjala";
	
	for (int i = 0; i < 20; i++){
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << "* ";
	}
	for (int i = 0; i < 1; i++) {
		cout << "\n* " << etunimi << endl;

	}
	for (int i = 0; i < 1; i++) {
		cout << "* " << sukunimi << " *" << endl;
	}
	for (int i = 0; i < 2; i++) {
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 1; i++) {
		cout << "*";
		for (int b = 0; b < 20; b++) {
			cout << "-";
		}
		cout << "*" << endl;
	}
	for (int i = 0; i < 2; i++) {
		cout << "* ";
	}
	for (int i = 0; i < 1; i++) {
		cout << "\n* " << osoite << " *" << endl;
	}
	for (int i = 0; i < 1; i++) {
		cout << "* " << postinro << " *" << endl;
	}
	for (int i = 0; i < 2; i++) {
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i < 20; i++) {
		cout << "*";
	}
	cout << endl;
	system("pause");
}

/*
vaihtoehtoisesti koko rimpsun tallettaisi muuttujaan ja korvaisi rivinvaihdot \n 
*/