#pragma once
#include "Root.h"
class Square : public Root
{
private:
	int a, b, c;
	double x1 ,x2;
public:
	Square();
	Square(int, int, int);

	void SetA(int);
	void SetB(int);
	void SetC(int);
	void SetX1(double);
	void SetX2(double);

	int GetA() const;
	int GetB() const;
	int GetC() const;
	double GetX2() const;
	double GetX1() const;

	void Result();
	void Print();
};

