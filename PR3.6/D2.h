#pragma once

#include <iostream>
#include "B1.h"

using namespace std;

class D2 : private B1
{
private:
	int d2;

public:
	D2(int x, int y);
	void show_D2();
};