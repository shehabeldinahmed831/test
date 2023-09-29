#include <iostream>
using namespace std;
int power1(int a, int n) {
    if (n == 0) {
        return 1;
    }
    else {

        int result;
        result = a * power1(a, n - 1);
        return result;
    }

}
int power2(int a, int n) {
    int result;
    if (n == 0) {
        result= 1;
    }
    else if (n%2!= 0) {
        result = power1(a, n / 2) * power1(a, n / 2 + 1);
    }
    else {
        
        result = power2(a, n / 2) * power2(a, n / 2);
        
    }
    return result;

}

int main()
{
    int input1, input2, input3, input4;
    cout << "Enter the number and the power" << endl;
    cin >> input1 >> input2;
    cout << power1(input1, input2) << endl;

    cout << "Enter the number and the power" << endl;
    cin >> input3 >> input4;
    cout << power2(input3, input4) << endl;
    cout << endl;
}
