#include <iostream>
using namespace std;
#define MINIMI 10  // m‰‰ritet‰‰n MAX
const int MAKSIMI = 20;  // m‰‰ritet‰‰n max
int summa;  // m‰‰ritet‰‰n int tyypin muuttuja summa
void Laske(int, int);  // m‰‰ritet‰‰n muuttuja Laske joka vastaanottaa kaksi int muuttujaa
void main() {  // p‰‰ohjelman alku
	int luku1 = 2;  //m‰‰ritet‰‰n luku 1 ja sen arvoksi 2
	int luku2;  //m‰‰ritet‰‰n luku 2
	cout << "Syˆt‰ luku: ";  //tulostetaan k‰ytt‰j‰ll teksti 
	cin >> luku2;  //pyydet‰‰n k‰ytt‰j‰‰ syˆtt‰m‰‰n arvo muuttujalle luku2
	Laske(luku1, luku2);  //kutsutaan funktiota Laske (rivi 23)
	if (summa < MINIMI) {  // jos summa on pienempi kuin MAX tee seuraava
		cout << "Summa on pienempi kuin " << MINIMI << endl;  //tulostaa tekstin ja tiedon mit‰ pienempi se on
		system("pause");  //pys‰ytt‰‰ ohjelman
	}
	else if (summa < MAKSIMI) {  //jos summa on pienempi kuin max, tee seuraava
		cout << "Summa on pienempi kuin " << MAKSIMI << endl;  //tulostaa tekstin ja tiedon mit‰ pienempi se on
		system("pause");  // pys‰ytt‰‰ ohjelman
	}
	else if (summa > MINIMI && summa < MAKSIMI) {
		cout << "Summa on minimin ja maksimin v‰liss‰" << endl;
	}
	else {
		cout << "Summa ei osu minimin ja maksimin v‰liin" << endl;
	}
}

void Laske(int eka, int toka) {  //Laske funktio
	summa = eka + toka; // m‰‰ritt‰‰ summan arvoksi funktion sis‰lle syˆtettyjen arvojen numeroiden summan
}
