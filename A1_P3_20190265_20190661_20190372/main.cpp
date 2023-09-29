#include <iostream>
#include"Matrix.h"
#include "MatrixCalculator.h"
using namespace std;

template<class T>
Matrix<T>::Matrix(int r, int c)
{

    row = r; colum = c;
    a = new T * [row];
    mult = new T * [row];
    trans = new T * [colum];
    for (int i = 0; i < row; i++) {
        a[i] = new T[colum];
        mult[i] = new T[colum];
    }
    for (int i = 0; i < colum; i++) {
        trans[i] = new T[row];
    }

}

template<class T>
Matrix<T>::Matrix(const Matrix& m)
{
    row = m.row;
    colum = m.colum;
    a = new T * [row];
    for (int i = 0; i < row; i++) {
        a[i] = new T[colum];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            a[i][j] = m.a[i][j];
        }
    }
}

template<class T>
bool Matrix<T>::operator==(Matrix <T>obj1)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            if (a[i][j] != obj1.a[i][j]) {
                return 0;
            }
        }
    } return 1;
}

template<class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> obj1)
{
    Matrix <T> obj2(row, colum);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            obj2.a[i][j] = a[i][j] + obj1.a[i][j];
        }
    }return obj2;
}
template<class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> obj1)
{
    Matrix <T> obj2(row, colum);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            obj2.a[i][j] = a[i][j] - obj1.a[i][j];
        }
    }return obj2;
}
template<class T>
void Matrix<T>::operator*(const Matrix<T> obj1)
{

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < obj1.colum; ++j)
        {
            mult[i][j] = 0;
            for (int k = 0; k < colum; ++k)
            {
                mult[i][j] += a[i][k] * obj1.a[k][j];

            }
            cout << mult[i][j] << '\t';
        }
        cout << endl;
    }

}
template<class T>
void Matrix<T>::transpose() {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < colum; ++j) {
            trans[j][i] = a[i][j];
            cout << trans[i][j] << '\t';
        }
        cout << endl;
    }

}



template<class S>
istream& operator>>(istream& in, Matrix<S>& m)
{
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.colum; j++) {
            in >> m.a[i][j];
        }
    }
    return in;
}
template<class S>
ostream& operator<<(ostream& op, const Matrix<S>& m) {
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.colum; j++) {
            op << m.a[i][j] << "\t";
        }op << endl;
    }
    return op;
}

MatrixCalculator::MatrixCalculator() {
    int input11, input12, input21, input22;
    input11=input12=input21=input22=0;
    int choice = 0;
    while (true)
    {
        
        
        cout << "Welcome to FCI Matrix Calculator" << endl;
        cout << "----------------------------------------" << endl;
        cout << "1-Perform Matrix Addition" << endl;
        cout << "2-Perform Matrix Subtraction" << endl;
        cout << "3-Perform Matrix Multiplication" << endl;
        cout << "4-Matrix Transpose" << endl;
        cin >> choice;
        if (choice ==1) {
            cout << "Enter the size of the first matrix" << endl;
            cin>>input11>>input12;
            Matrix<int> test1(input11, input12);
            cout << endl;
            cin >> test1;
            cout << endl;
            cout << "Enter the size of the second matrix" << endl;
            Matrix<int> test2(input21, input22);
            cin >> input21 >> input22;
            cout << endl;
            cin >> test2;
            cout << endl;
            cout<<test1 + test2;
        }
        else if (choice == 2) {
            cout << "Enter the size of the first matrix" << endl;
            cin >> input11 >> input12;
            Matrix<int> test1(input11, input12);
            cout << endl;
            cin >> test1;
            cout << endl;
            cout << "Enter the size of the second matrix" << endl;
            cin >> input21 >> input22;
            Matrix<int> test2(input21, input22);
            cout << endl;
            cin >> test2;
            cout << endl;
            cout << test1 - test2;
        }
        else if (choice == 3) {
            cout << "Enter the size of the first matrix" << endl;
            cin >> input11 >> input12;
            Matrix<int> test1(input11, input12);
            cout << endl;
            cin >> test1;
            cout << endl;
            cout << "Enter the size of the second matrix" << endl;
            cin >> input21 >> input22;
            Matrix<int> test2(input21, input22);
            cout << endl;
            cin >> test2;
            cout << endl;
            test1 * test2;
        }
        else if(choice == 4)
        {
            cout << "Enter the size of the matrix" << endl;
            cin >> input11 >> input12;
            Matrix<int> test1(input11, input12);
            cout << endl;
            test1.transpose();
        }
        else {
            break;
        }
    }
    
    
        
       
        
        
        
    
}
int main()
{
    MatrixCalculator object;
}
