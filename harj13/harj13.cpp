#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void main() {
	string etu;
	string suku;
	string kokonimi;
	string kokonimi2;
	char etu2[20];
	char suku2[20];


	cout << "Anna etunimi: ";
	cin >> etu;
	cout << "Anna sukunimi: ";
	cin >> suku;
	kokonimi = etu + " " + suku;  // Append?
	cout << "Nimesi on: " << kokonimi << endl;

	cout << "Anna etunimi: ";
	cin >> etu2;
	cout << "Anna sukunimi: ";
	cin >> suku2;
	strcat_s(etu2, " ");
	strcat_s(etu2, suku2);
	cout << "Nimesi on: " << etu2 << endl;
	system("pause");

}