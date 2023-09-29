#include "FractionCalculator.h"
#include"Fraction.h"
FractionCalculator::FractionCalculator()
{
}

void FractionCalculator::opencalculator()
{
	while (true) {
		Fraction test1, test2;
		int choice = 0;
		cout << "Welcome to FCI Calculator" << endl;
		cout << "----------------------------------------" << endl;
		cout << "1 - Perform Fraction Addition" << endl;
		cout << "2 - Perform Fraction Subtraction" << endl;
		cout << "3 - Perform Fraction Multiplication" << endl;
		cout << "4 - Exit" << endl;
		cout << "Enter your choice" << endl;

		cin >> choice;
		if (choice==1) {
			cout << "Enter the first Fraction" << endl;
			cin >> test1;
			cout << "Enter the second Fraction" << endl;
			cin >> test2;
			cout << test1 + test2 << endl;
		}
		else if (choice == 2) {
			cout << "Enter the first Fraction" << endl;
			cin >> test1;
			cout << "Enter the second Fraction" << endl;
			cin >> test2;
			cout << test1 - test2 << endl;
		}
		else if (choice == 3) {
			cout << "Enter the first Fraction" << endl;
			cin >> test1;
			cout << "Enter the second Fraction" << endl;
			cin >> test2;
			cout << test1 * test2 << endl;
		}
		else if (choice == 4) {
			cout << "exit"<<endl;
		}
		else {
			cout << "exit" << endl;
		}

	}
}
