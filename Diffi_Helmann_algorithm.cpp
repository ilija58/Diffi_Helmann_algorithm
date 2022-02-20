

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double g, p, a, b;
	cout << "Put g ";
	cin >> g;
	cout << "Put p ";
	cin >> p;
	cout << "Put Alice private key ";
	cin >> a;
	cout << "Put Bob private key ";
	cin >> b;
	double A, B;
	A = fmod(pow(g, a), p);
	B = fmod(pow(g, b), p);
	cout << "A = " << A << " B = " << B << endl;
	int symmKey1, symmKey2;
	symmKey1 = fmod(pow(B, a), p);
	symmKey2 = fmod(pow(A, b), p);
	cout << symmKey1 << " " << symmKey2 << endl;
		if (symmKey1 == symmKey2) cout << "OK";
		else cout << "not OK";
}


