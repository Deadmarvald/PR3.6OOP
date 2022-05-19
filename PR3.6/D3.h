#pragma once

#include <iostream>
#include "B2.h"
#include "D1.h"
#include "D2.h"

class D3 : public D1, public D2, private B2
{
private:
	int d3;

public:
	D3(int x, int y, int z, int i, int j, int m);
	void show_D3();
};