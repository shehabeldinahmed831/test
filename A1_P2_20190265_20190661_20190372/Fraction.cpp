#include "Fraction.h"
#include<iostream>
Fraction::Fraction() {

}

void Fraction::reduce()
{
    
        int x = gcd(top, bottom);
        top /= x;
        bottom /= x;

    
}

int Fraction::gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}



ostream& operator<<(ostream& output, const Fraction& D) {
    if (D.top == D.bottom) {
        output<<1;
    }
    else {
        output << D.top << "/" << D.bottom;
    }
    return output;
}

istream& operator>>(istream& input, Fraction& D) {
    char c;
    if (D.bottom==0) {
        cout << "Error(case:dividing by zero)"<<endl;
    }
    else {
        input >> D.top >> c >> D.bottom;
        return input;

    }
    
}
Fraction Fraction::operator + (Fraction const& obj) {
    Fraction result;
    result.top = (top * obj.bottom) + (bottom * obj.top);
    result.bottom = bottom * obj.bottom;
    result.reduce();
    return result;
}

Fraction Fraction::operator-(Fraction const& obj)
{
    Fraction result;
    result.top = (top * obj.bottom) - (bottom * obj.top);
    result.bottom = bottom * obj.bottom;
    result.reduce();
    return result;
}

Fraction Fraction::operator*(Fraction const& obj)
{
    Fraction result;
    result.top = (top * obj.top);
    result.bottom =( bottom * obj.bottom);
    result.reduce();
    return result;
}

Fraction Fraction::operator/(Fraction const& obj)
{
    Fraction result;
    result.top = (top * obj.bottom);
    result.bottom = (bottom * obj.top);
    result.reduce();
    return result;
}
bool Fraction::operator<(const Fraction& d)
{

    if ((top / bottom) < (d.top / d.bottom) ) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator>(const Fraction& d)
{
    if ((top / bottom) > (d.top / d.bottom) ) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator>=(const Fraction& d)
{
    if ((top / bottom) >= (d.top / d.bottom)) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator<=(const Fraction& d)
{
    if ((top / bottom) <= (d.top / d.bottom)) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator==(const Fraction& d)
{
    if ((top / bottom) == (d.top / d.bottom)) {
        return true;
    }
    else {
        return false;
    }
    
}

