#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


int main(void){
	int a, b, c;
	int i = 0;

	cout << "Anna luku 1: ";
	cin >> a;
	cout << "Anna luku 2: ";
	cin >> b;
	cout << "anna luku 3: ";
	cin >> c;

	array<int, 3> mylst = { a, b, c };

	sort(mylst.begin(), mylst.end());
	for (auto i : mylst) {
		cout << i << endl;
	}
	
	system("pause");
}