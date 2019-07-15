//Making a simple CALCULATOR
#include <iostream>
using namespace std;

int main ()
{
	float num1, num2;
	char op;
start:	cout << "Enter: num1 (operator) num2\n";
	cin >> num1 >> op >> num2;
	switch (op)
	{
	case '+' : cout << num1 + num2 <<endl; break;
	case '-' : cout << num1 - num2 <<endl; break;
	case '*' : cout << num1 * num2 <<endl; break;
	case '/' : cout << num1 / num2 <<endl; break;
	default     : cout << "Invalid" <<endl; return 0;
	}
	goto start;
}