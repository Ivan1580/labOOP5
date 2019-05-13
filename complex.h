#pragma once
#include <iostream>
using namespace std;

class Complex {
private:
	double Re;
	double Im;
public:
	Complex();

	Complex& operator++(int);
	Complex operator++();
	Complex& operator--(int);
	Complex operator--();
	Complex& operator=(const Complex Complex);
	friend bool operator==(const Complex& f, const Complex& s);
	friend istream& operator>>(istream& in, Complex& complex);
	friend ostream& operator<<(ostream& out, Complex& complex);
	
	
};