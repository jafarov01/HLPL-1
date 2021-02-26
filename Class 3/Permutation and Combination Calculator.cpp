#include "std_lib_facilities.h"

class Bad_option{};
class Bad_input{};
class Condition_error{};

int permutation(int a, int b); // a is an element of N (cannot be 0) and b <= a
int combination(int a, int b); // a is an element of N (cannot be 0) and b <= a
void menu_option(int& choose);

int main()
{
	int option = 0, a, b;
	try {
		menu_option(option);
	}
	catch (Bad_option)
	{
		cerr << "Bad option, please try again with a valid option!\n\n";
	}

	switch (option)
	{
	case 1:
	{
		system("cls");
		cout << "P(a, b)" << endl << "a is the number of total options you have to choose from." << endl <<
			"b is how many items you need to choose." << endl << endl;
		cout << "a is an element of N ve b <= a" << endl << endl;
		cout << "Enter a:"; cin >> a;
		cout << "Enter b:"; cin >> b;
		try {
			cout << "Result: " << permutation(a, b) << endl;
		}
		catch (Bad_input)
		{
			cerr << "Bad input, please try again with valid inputs, according to the rules of Permutation and Combination.\n\n";
		}
		catch (Condition_error)
		{
			cerr << "The value of a cannot be 0. Please try again and enter nonzero for the value of a.\n\n";
		}

		break;
	}
	case 2:
	{
		system("cls");
		cout << "C(a, b)" << endl << "a is the number of items you have to choose from." << endl <<
			"b is the number of items you're going to select." << endl << endl;
		cout << "a is an element of N ve b <= a" << endl << endl;
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		try {
			cout << "Result: " << combination(a, b) << endl;
		}
		catch (Bad_input)
		{
			cerr << "Bad input, please try again with valid inputs, according to the rules of Permutation and Combination.\n\n";
		}
		catch (Condition_error)
		{
			cerr << "The value of a cannot be 0. Please try again and enter nonzero for the value of a.\n\n";
		}
		break;
	}
	case 3:
	{
		system("cls");
		cout << "P(a, b)" << endl << "a is the number of total options you have to choose from." << endl <<
			"b is how many items you need to choose." << endl;
		cout << "C(a, b)" << endl << "a is the number of items you have to choose from." << endl <<
			"b is the number of items you're going to select." << endl << endl;
		cout << "a is an element of N ve b <= a" << endl << endl;
		cout << "Enter a: "; cin >> a;
		cout << "Enter b: "; cin >> b;
		cout << "\n\n\nResults: \n" << endl;
		try {
			cout << "Permutation( " << a << ", " << b << ")" << " = " << permutation(a, b) << endl;
			cout << "Combination( " << a << ", " << b << ")" << " = " << combination(a, b) << endl;
		}
		catch (Bad_input)
		{
			cerr << "Bad input, please try again with valid inputs, according to the rules of Permutation and Combination.\n\n";
		}
		catch (Condition_error)
		{
			cerr << "The value of a cannot be 0. Please try again and enter nonzero for the value of a.\n\n";
		}
		break;
	}
	}
	return 0;
}

void menu_option(int& choose)
{
	for (int i = 0; i < 60; i++)
		cout << char(205);
	cout << "\n\n Welcome to the best Permutation and Combination Calculator!\n";

	cout << " 1- Permutation " << endl;

	cout << " 2- Combination " << endl;

	cout << " 3- Permutation and Combination " << endl << endl;

	for (int i = 0; i < 60; i++)
		cout << char(205);

	cout << " \n\nWHAT DO YOU WANT TO CALCULATE: ";
	cin >> choose;
	if (choose < 1 || choose > 3) throw Bad_option{};
}

int permutation(int a, int b)
{
	if (a < b) throw Bad_input{};
	if (a == 0) throw Condition_error{};
	int perm = 1;
	for (int i = a - b + 1; i <= a; i++)
	{
		perm *= i;
	}
	return perm;
}

int combination(int a, int b)
{
	if (a < b) throw Bad_input{};
	if (a == 0) throw Condition_error{};
	int numerator = 1, denominator = 1, comb = 1;


	for (int i = 0; i < b; i++) //a = 6, b =4
	{
		numerator *= (a-i);
	}
	for (int i = b; i > 0; i--)
	{
		denominator *= i;
	}
	comb = numerator / denominator;
	return comb;
}