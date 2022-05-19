#include <iostream>
#include <Windows.h>
#include "D3.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o0.show_B1();
	cout << endl;

	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o1.show_D1();
	cout << endl;

	D2 o2(111, 222);
	cout << "D2 o2(111, 222);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	o2.show_D2();
	cout << endl;

	B2 o3(777);
	cout << "B2 o3(777);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o3.show_B2();
	cout << endl;

	D3 o4(111, 222, 333, 444, 555, 666);
	cout << "D3 o4(111, 222, 333, 444, 555, 666);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o4.show_D3();
	cout << endl;

	system("pause");
	return 0;
}