#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	a = 3;
	b = 5;

	cout<< "Program Menukarkan Dua Buah Bilangan" <<endl;

	cout << "Angka Sebelum Ditukar" <<endl;
	cout << a <<endl;
	cout << b <<endl;

	c=a;
	a=b;
	b=c;

	cout << "Angka Setelah Ditukar" <<endl;
	cout << a <<endl;
	cout << b <<endl;
	return 0;
}
