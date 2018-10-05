#include <iostream>;
#include <string>
using namespace std;

int ihanne;
int erotus;
void laskuri(int, int);
int main() {
	char nimi[30];
	int pituus;
	char osoite[50];
	int paino;

	cout << "Ihannepaino\n\nOhjelma laskee ihannepainosi\npituutesi perusteella.\n" << endl;

	cout << "Anna nimesi" << endl;
	cin.get(nimi, 30);
	cout << "Anna pituutesi senttein" << endl;
	cin >> pituus;
	cout << "Anna osoitteesi" << endl;
	cin.ignore();
	cin.getline(osoite, 50);
	cin.clear();
	cout << "Anna painosi kiloina" << endl;
	cin.clear();
	cin >> paino;

	laskuri(pituus, paino);

	cout << "Arvoisa " << nimi << endl;
	cout << "Osoitteesi on " << osoite << endl;
	cout << "Nykyinen painosi on " << paino << " kg" << endl;
	cout << "Ihannepainosi " << ihanne << " kg" << endl;
	cout << "Erotus " << erotus << " kg" << endl;
	system("pause");
}

void laskuri(int pituus, int paino) {
	ihanne = pituus - 100;
	erotus = paino - ihanne;
}