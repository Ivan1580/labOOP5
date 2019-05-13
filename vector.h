#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vector {
private:
	int x;
	int y;
public:
	Vector();

	Vector& operator=(const Vector vector);
	bool operator==(const Vector& object);
	friend istream& operator>>(istream& in, Vector& vector);
	friend ostream& operator<<(ostream& out, Vector& vector);
	

};
