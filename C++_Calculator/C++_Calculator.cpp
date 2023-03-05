#include <iostream>

using namespace std;

int main() {

	string answer;
	int add, sub, mul, div;
	cout << "Do you want to add or sub or mul or div or mod" 
		<< endl;
	cin >> answer;

	if (answer == "add") 
	{
		int num1, num2;
		cout << "Enter Number 1: " << endl;
		cin >> num1;
		cout << "Enter Number 2: " << endl;
		cin >> num2;
		add = num1 + num2;
		cout << add << endl;
	}
	if (answer == "sub")
	{
		int num1, num2;
		cout << "Enter Number 1: " << endl;
		cin >> num1;
		cout << "Enter Number 2: " << endl;
		cin >> num2;
		sub = num1 - num2;
		cout << sub << endl;
	}
	if (answer == "mul")
	{
		int num1, num2;
		cout << "Enter Number 1: " << endl;
		cin >> num1;
		cout << "Enter Number 2: " << endl;
		cin >> num2;
		mul = num1 * num2;
		cout << mul << endl;
	}
	if (answer == "div")
	{
		int num1;
		int num2;
		cout << "Enter Number 1: " << endl;
		cin >> num1;
		cout << "Enter Number 2: " << endl;
		cin >> num2;
		div = num1 / num2;
		cout << div << endl;
	}

	system("pause > 0");

}