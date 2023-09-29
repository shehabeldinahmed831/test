#pragma once
#include<iostream>
using namespace std;
class Fraction
{
public:
	int top, bottom;

	Fraction();
	void reduce();
	int gcd(int a, int b);
	Fraction operator+(Fraction const& obj);
	Fraction operator-(Fraction const& obj);
	Fraction operator*(Fraction const& obj);
	Fraction operator/(Fraction const& obj);
	bool operator < (const Fraction& d);
	bool operator > (const Fraction& d);
	bool operator >=(const Fraction& d);
	bool operator <=(const Fraction& d);
	bool operator ==(const Fraction& d);
	friend ostream& operator<<(ostream& output, const Fraction& D);
	friend istream& operator>>(istream& input, Fraction& D);

};
