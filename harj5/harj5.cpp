#include <iostream>
using namespace std;

int main(){
	int luku1;
	int luku2;

	cout << "Anna luku 1" << endl;
	cin >> luku1;
	cout << "Anna luku 2" << endl;
	cin >> luku2;
	
	if (luku1 == luku2) {
		cout << "BINGO";
	}
	else {
		cout << "BONGO";
	}
}