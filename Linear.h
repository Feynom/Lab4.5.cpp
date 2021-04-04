#pragma once
#include "Root.h"
class Linear : public Root
{
private:
	int a, b;
	double x1;
public:
	Linear();
	Linear(int, int);

	void SetA(int);
	void SetB(int);
	void SetX1(double);

	int GetA() const;
	int GetB() const;
	double GetX1() const;


	virtual void Result();
	virtual void Print();
};

