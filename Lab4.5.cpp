#include "Linear.h";
#include "Square.h";

int main()
{
    cout << "\nLinear" << endl;
    Linear A(3, 6);
    A.Result();
    A.Print();

    cout << "\nLinear" << endl;
    Linear B(9, 6);
    B.Result();
    B.Print();

    cout << "\nSquare" << endl;
    Square C(1, 6, 3);
    C.Result();
    C.Print();

    cout << "\nSquare" << endl;
    Square D(9, 3, 2);
    D.Result();
    D.Print();

    cout << "\nSquare" << endl;
    Square E(1, -6, 9);
    E.Result();
    E.Print();

    Root* pa = new Linear();
    Root* pb = new Linear();

    Root* pc = new Square();
    Root* pd = new Square();
    Root* pe = new Square();

    cout << endl;
    cout << typeid(pa).name() << endl;
    cout << typeid(*pa).name() << endl;
    cout << typeid(pb).name() << endl;
    cout << typeid(*pb).name() << endl;

    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;
    cout << typeid(pd).name() << endl;
    cout << typeid(*pd).name() << endl;
    cout << typeid(pe).name() << endl;
    cout << typeid(*pe).name() << endl;

    Root* N[5];

    N[0] = &A;
    N[1] = &B;
    N[2] = &C;
    N[3] = &D;
    N[4] = &E;

    cout << "\nLinear" << endl;
    N[0]->Print();
    cout << "\nLinear" << endl;
    N[1]->Print();
    cout << "\nSquare" << endl;
    N[2]->Print();
    cout << "\nSquare" << endl;
    N[3]->Print();
    cout << "\nSquare" << endl;
    N[4]->Print();


    return 0;
}