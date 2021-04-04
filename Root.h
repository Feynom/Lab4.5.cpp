#pragma once
#include <iostream>

using namespace std;

class Root
{
public:
	virtual void Result() = 0;
	virtual void Print() = 0;
	virtual void SetA(int) = 0;
	virtual void SetB(int) = 0;
	virtual void SetX1(double) = 0;

};

