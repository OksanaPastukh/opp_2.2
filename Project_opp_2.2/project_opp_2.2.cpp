#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex a, b;
	cout << "a =  " << endl; cin >> a;
    cout << "b =  " << endl; cin >> b;
	cout << endl;
	// �������� -=
	cout << "a -=b  :" << endl;
	a -= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// ��������� +=
	cout << "a +=  :" << endl;
	a += b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// �������� *=
	cout << "a *=b  :" << endl;
	a *= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// ������ /=
	cout << "a /=b  :" << endl;
	a /= b;
	cout << "a = " << endl << a;
	cout << "b = " << endl << b << endl;
	// ��������
	cout << "a + b = " << endl << a + b;
	cout << "a - b = " << endl << a - b;
	cout << "a * b = " << endl << a * b;
	cout << "a / b = " << endl << a / b << endl;
	cout << "a ++ = " << endl << a++;
	cout << "a -- = " << endl << a;

	return 0;
}