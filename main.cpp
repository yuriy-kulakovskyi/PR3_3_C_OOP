#include "./classes/Fraction.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Initial object count: " << Object::getCounter() << endl;

    {
        Fraction f1;
        cout << "After creating f1, object count: " << Object::getCounter() << endl;

        Fraction f2(123, 45678);
        cout << "After creating f2, object count: " << Object::getCounter() << endl;

        cout << "f1 (default): " << f1 << endl;
        cout << "f2 (initialized): " << f2 << endl;

        Fraction f3 = f2;
        cout << "After creating f3, object count: " << Object::getCounter() << endl;

        Fraction f4;
        f4 = f2;
        cout << "After creating f4, object count: " << Object::getCounter() << endl;

        cout << "f3 (copy of f2): " << f3 << endl;
        cout << "f4 (assigned from f2): " << f4 << endl;

        cout << "\nEnter first fraction:" << endl;
        Fraction a;
        cin >> a;
        cout << "Enter second fraction:" << endl;
        Fraction b;
        cin >> b;
        cout << "First fraction: " << a << endl;
        cout << "Second fraction: " << b << endl;

        Fraction sum = a + b;
        cout << "Addition (a + b): " << sum << endl;

        Fraction product = a * b;
        cout << "Multiplication (a * b): " << product << endl;

        cout << "\nDemonstration of prefix and postfix operations:" << endl;
        cout << "a initially: " << a << endl;

        Fraction temp;
        temp = ++a;
        cout << "temp = ++a: " << endl;
        cout << "a = " << a << ", temp = " << temp << endl;

        temp = --a;
        cout << "temp = --a: " << endl;
        cout << "a = " << a << ", temp = " << temp << endl;

        temp = a++;
        cout << "temp = a++: " << endl;
        cout << "a = " << a << ", temp = " << temp << endl;

        temp = a--;
        cout << "temp = a--: " << endl;
        cout << "a = " << a << ", temp = " << temp << endl;

        cout << "Current object count: " << Object::getCounter() << endl;
    }

    cout << "After destroying all local fractions, object count: " << Object::getCounter() << endl;

    return 0;
}
