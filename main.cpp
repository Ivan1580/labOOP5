#include <iostream>
#include "complex.h"
#include "vector.h"


using namespace std;

int main() {
	Complex c1,c2;
	cout << "vvedite complex 4islo"<< endl;
	cin >> c1;
	c2 = c1;
	c1++;
	c2--;
	++c1;
	--c2;
	cout << "pervoe" << c1;
	cout << endl;
	cout << "vtoroe" << c2;
	cout << endl;
	if (c1 == c2)
	{
		cout << "ravni" << endl;
	}
	else
	{
		cout << "ne ravni" << endl;
	}
	

	Vector v,v1;
	cout << "Vvedite koor:" << endl;
	cin >> v;
	v1 = v;
	cout << "koor 1 vec: " << v << endl;
	cout << "koor 2 vec: " << v1 << endl;
	if (v == v1)
	{
		cout << "ravni";
	}
	else
	{
		cout << "ne ravni";
	}

}