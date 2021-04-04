#include "Square.h"

Square::Square() { SetA(0); SetB(0); SetC(0); }
Square::Square(int a = 0, int b = 0, int c = 0) { SetA(a); SetB(b); SetC(c); }

void Square::SetA(int a = 0) { this->a = a; }
void Square::SetB(int b = 0) { this->b = b; }
void Square::SetC(int c = 0) { this->c = c; }
void Square::SetX1(double x1 = 0) { this->x1 = x1; }
void Square::SetX2(double x2 = 0) { this->x2 = x2; }

int Square::GetA() const { return a; }
int Square::GetB() const { return b; }
int Square::GetC() const { return c; }
double Square::GetX1() const { return x1; }
double Square::GetX2() const { return x2; }

void Square::Result() {
	double discriminant = GetB() * GetB() - 4 * GetA() * GetC();
	if (discriminant < 0)
		SetX1(999999);
	else {
		SetX1((-1 * GetB() - sqrt(discriminant)) / 2 * GetA());
		SetX2((-1 * GetB() + sqrt(discriminant)) / 2 * GetA());
	}
}
void Square::Print() {
	cout << GetA() << "X^2" << "+" << GetB() << "x" << "+" << GetC() << "= 0 " << endl;
	if (GetX1() != 999999) {
		cout << "X1 = " << GetX1() << endl;
		cout << "X2 = " << GetX2() << endl;
	}
	else
		cout << "No Roots(D < 0)!" << endl;
}