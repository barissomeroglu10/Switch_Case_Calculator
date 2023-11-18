/*

?n this code ? made an simple calculator.

Coder: Bar?? Somero?lu
Date: 18.11.23 / 3.40 p.m.

*/





#include <iostream>

using namespace std;

int main()
{
	int Number1, Number2;
	double Result = 0;
	char Operator;

	cout << "Please Enter 1. Number: ";
	cin >> Number1;


	cout << "Please Enter 2. Number: ";
	cin >> Number2;

	cout << "Please Enter Operator: ";
	cin >> Operator;

	switch (Operator)
	{
	case '+':
		Result = Number1 + Number2;
		cout << "Result: " << Result << endl; break;

	case '-':
		Result = Number1 - Number2;
		cout << "Result: " << Result << endl; break;

	case '*':
		Result = Number1 * Number2;
		cout << "Result: " << Result << endl; break;

	case '/':
		if (Number2 == 0)
		{
			cout << "Denominator can not be zero for Division Operation!" << endl;
		}

		else
		{
			Result = Number1 / Number2;
			cout << "Result: " << Result << endl; break;

		}

	default:
		cout << "Please Select a correct Operator!" << endl;


	}


	return 0;
}