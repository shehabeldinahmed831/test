#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
using namespace std;
template<class T>
class Matrix {
private:
    T** a;
    T** mult;
    T** trans;
    int row; int colum;
public:
    Matrix(int r, int c);

    Matrix(const Matrix& m);
    bool operator == (Matrix obj1);

    Matrix operator+(const Matrix <T>obj1);

    Matrix operator -(const Matrix <T>obj1);
    void transpose();

    void operator *(const Matrix <T>obj1);
    template<class S>
    friend istream& operator>>(istream& in, Matrix<S>& m);
    template<class S>
    friend ostream& operator<<(ostream& op, const Matrix<S>& m);
    friend class MatrixCalculator;

    
};



#endif // MATRIX_H_INCLUDED
