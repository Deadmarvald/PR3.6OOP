#include "D3.h"

D3::D3(int x, int y, int z, int i, int j, int m) : D1(y, z), D2(i, j), B2(m)
{
	d3 = x;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_D1();
	show_D2();
	show_B2();
	cout << "show_D3()" << endl
		 << "D3::d3 = " << d3 << endl << endl;
}