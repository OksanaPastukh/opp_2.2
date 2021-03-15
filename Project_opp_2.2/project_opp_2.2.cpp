#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex a, b;
	cout << "a =  " << endl; cin >> a;
    cout << "b =  " << endl; cin >> b;
	cout << endl;
	// віднімання -=
	cout << "a -=b  :" << endl;
	a -= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// додавання +=
	cout << "a +=  :" << endl;
	a += b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// множення *=
	cout << "a *=b  :" << endl;
	a *= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// ділення /=
	cout << "a /=b  :" << endl;
	a /= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// операції
	cout << "a + b = " << endl << a + b;
	cout << "a - b = " << endl << a - b;
	cout << "a * b = " << endl << a * b;
	cout << "a / b = " << endl << a / b << endl;
	cout << "a ++ = " << endl << a++;
	cout << "a -- = " << endl << a;

	return 0;
}