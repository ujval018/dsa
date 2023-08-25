/* Write a menu driven program to create a structure to represent complex number and
perform the following operation using function :
1. addition of two complex number (call by value)
2. multiplication of two complex number (call by address)
*/
#include <iostream>
using namespace std;
struct complex
{
    int real;
    int complex;
};
void add(complex c, complex cc)
{
    int a, b;
    a = c.real + cc.real;
    b = c.complex + cc.complex;
    cout << "sum = " << a << "+" << b << "i" << endl;
}
void multiply(complex *p1, complex *p2)
{   
    complex a;
    a.real=(p1->real * p2->real) - (p1->complex * p2->complex); 
    a.complex=(p1->real * p2->complex)+(p2->real * p1->complex);   
    cout<<a.real<<"+"<<a.complex<<"i"<<endl;
}

int main()
{
    complex c1, c2;
    cout << "enter 1st complex number " << endl;
    cin >> c1.real >> c1.complex;
    cout << "enter 2nd complex number " << endl;
    cin >> c2.real >> c2.complex;

    
    int n;
    cout << "Menu " << endl
         << "1. addition" << endl
         << "2. multiplication " << endl;

    cout << "enter your choice" << endl;
    cin >> n;
    if (n == 1)
    {
        add(c1, c2);
    }
    else if (n == 2)
    {
        multiply( &c1, &c2);

    }

    return 0;
}