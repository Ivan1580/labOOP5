#include "complex.h"
#include "vector.h"
Complex::Complex()
{
	Re = 0;
	Im = 0;
}

istream& operator>>(istream& in, Complex& complex)
{
	cout << "Re:";
	in >> complex.Re;
	cout << "Im:";
	in >> complex.Im;
	return in;
}

ostream& operator<<(ostream& out, Complex& complex)
{
	out << complex.Re << "+ (" << complex.Im << ")i";
	return out;
}

Complex& Complex::operator=(const Complex complex)
{
	Re = complex.Re;
	Im = complex.Im;
	return *this;
}
  
Complex& Complex::operator++(int)
{	
	Complex temp;
	temp.Re = Re;
	temp.Im = Im;
	Re++;
	Im++;
	return temp;
}
Complex Complex::operator++()
{
	++Re;
	++Im;
	return *this;
}
Complex& Complex::operator--(int)
{
	Complex temp1;
	temp1.Re = Re;
	temp1.Im = Im;
	Re--;
	Im--;
	return temp1;
}
Complex Complex::operator--()
{
	--Re;
	--Im;
	return *this;
}
bool operator==(const Complex& f, const Complex& s)
{
	return(f.Re == s.Re && f.Im == s.Im);
}
Vector::Vector()
{
	x = 0;
	y = 0;
}
istream& operator>>(istream& in, Vector& vector)
{
	cout << "koor X:";
	in >> vector.x;
	cout << "koor Y:";
	in >> vector.y;
	return in;
}
ostream& operator<<(ostream& out, Vector& vector)
{
	out << "(" << vector.x << "," << vector.y << ")";
	return out;
}

Vector& Vector::operator=(const Vector vector)
{
	x = vector.x;
	y = vector.y;
	return *this;
	
}
bool Vector::operator==(const Vector& object)
{
	return(sqrt(x * x + y * y) == sqrt(object.x * object.x + object.y * object.y));
}