#include <iostream>
using namespace std;

int main() {
	char etu[60];
	char suku[20];
	int shoe;
	float dist;
	char osoite[40];
	int postinumero;

	cout << "Anna kaikki etunimesi:" << endl;
	cin.getline(etu, 60);
	cout << "Anna kengannumero:" << endl;
	cin >> shoe;
	cout << "Anna sukunimesi:" << endl;
	cin >> suku;
	cout << "Anna koulumatkasi:" << endl;
	cin >> dist;
	cout << "Anna osoitteesi:" << endl;
	cin.ignore();
	cin.getline(osoite, 40);
	cout << "Anna postinumero:" << endl;
	cin >> postinumero;

	cout << endl;
	cout << suku << " " << etu << endl;
	cout << osoite << endl;
	cout << postinumero << endl;
	cout << shoe << " " << dist << endl;

	system("pause");
}