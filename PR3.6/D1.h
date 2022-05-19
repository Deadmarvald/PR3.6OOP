#pragma once

#include <iostream>
#include "B1.h"

using namespace std;

class D1 : public B1
{
private:
	int d1;

public:
	D1(int x, int y);
	void show_D1();
};