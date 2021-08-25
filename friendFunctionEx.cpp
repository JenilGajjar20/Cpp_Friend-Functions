#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex obj1, Complex obj2);

public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumbers()
    {
        cout << "Your complex number is: " << a << " + " << b << "i\n";
    }
};

Complex sumComplex(Complex obj1, Complex obj2)
{
    Complex obj3;
    obj3.setNumber((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 4);
    c1.printNumbers();

    c2.setNumber(3, 5);
    c2.printNumbers();

    sum = sumComplex(c1, c2);
    sum.printNumbers();
    return 0;
}