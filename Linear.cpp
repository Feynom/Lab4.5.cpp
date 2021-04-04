#include "Linear.h"

Linear::Linear() {SetA(0), SetB(0); }
Linear::Linear(int a = 0, int b = 0) { SetA(a), SetB(b); }

void Linear::SetA(int a = 0) { this->a = a; }
void Linear::SetB(int b = 0) { this->b = b; }
void Linear::SetX1(double x1 = 0) { this->x1 = x1; }

int Linear::GetA() const { return a; }
int Linear::GetB() const { return b; }
double Linear::GetX1() const { return x1; }


void Linear::Result() {
	SetX1((-1 * GetB()) / (GetA() * 1.));
}
void Linear::Print() {
	cout << GetA() << "x" << "+" << GetB() << "= 0 " << endl;
	cout << "X = " << GetX1() << endl;
}