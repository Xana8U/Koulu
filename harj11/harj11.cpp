#include <iostream>
#include <conio.h>
using namespace std;


int main(void) {
	int in;
	int luku1;
	int luku2;

	while(true){
		luku1 = 0;
		luku2 = 0;
		cout << "Anna luku 1" << endl;
		cin >> luku1;
		cout << "Anna luku 2" << endl;
		cin >> luku2;
		cout << "Valitse haluttu laskutoimitus \n\nVALIKKO\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n6. Syota uudet luvut laskemista varten" << endl;
		//in = _getch();
		cin >> in;
		if (in == 48) {  // getch key value 49
			return 0;
		}
		else if (in == 49) {  // getch key value 49
			cout << "Tulos laskutoimitukselle on " << luku1 + luku2 << endl;
			system("pause");
			return 0;
		}
		else if (in == 50) {  // getch key value 50
			cout << "Tulos laskutoimitukselle on " << luku1 - luku2 << endl;
			system("pause");
			return 0;
		}
		else if (in == 51) {  // getch key value 51
			cout << "Tulos laskutoimitukselle on " << luku1 * luku2 << endl;
			system("pause");
			return 0;
		}
		else if (in == 52) {  // getch key value 52
			cout << "Tulos laskutoimitukselle on " << luku1 / luku2 << endl;
			system("pause");
			return 0;
		}
		else if (in == 53) {  // getch key value 53
			cout << "Tulos laskutoimitukselle on " << luku1 % luku2 << endl;
			system("pause");
			return 0;
		}
		else if (in == 54) {  // getch key value 54
			cout << "Syötä uudelleen:\n";
		}
	}
}