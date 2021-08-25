#include<iostream>
using namespace std;

// Forward Declaration
class B;

class A
{
    int data;
    public:
        void setValue(int value)
        {
            data = value;
        }
    friend void add(A, B);
};  

class B
{
    int num;
    public:
        void setValue(int value)
        {
            num = value;
        }
    friend void add(A, B);
};

void add(A obj1, B obj2)
{
    cout<<"Sum of values of A and B objects are: "<<(obj1.data + obj2.num);
}

int main()
{
    A a1; // a1 is an object for class A
    a1.setValue(3); // Value of a1 is 3

    B b1; // b1 is an object for class B
    b1.setValue(4); // Value of b1 is 4

    add(a1, b1); // add the value of a1 and b1
    return 0;
}