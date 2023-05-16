#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	
	int a, b, c;
	a = B % 10;
	b = ((B % 100)-a)/10;
	c = ((B % 1000)-b)/100;

	cout << A * a << endl;
	cout << A * b << endl;
	cout << A * c << endl;
	cout << A * B;

	return 0;
}