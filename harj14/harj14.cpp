#include <iostream>
#include <cstring>
using namespace std;

int pituus(char*);
int main() {
	char mjono[16] = {'\0'};
	char mjono2[16] = {'\0'};

	cout << "Anna 17 merkkia pitka merkkijono ilman valilyonteja" << endl;
	cin >> mjono;

	int i = 0;
	while (mjono[i] != NULL) {
		if (pituus(mjono) > 100) {
			cout << "Merkkijono on liian pitkä!!";
			break;
		}
		else {
			mjono2[i] = mjono[pituus(mjono) - i - 1];
		}
		i++;
	}
	
	if (mjono == mjono2) {
		printf("Merkkijono on palindromi");
	}
	cout << mjono2 << endl;
	system("pause");
}
	
int pituus(char* jono) {
	int i2 = 0;
	while (jono[i2] != NULL) {
		i2++;
	}
	
	return i2;
}