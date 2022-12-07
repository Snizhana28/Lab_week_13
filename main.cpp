#include <iostream>
using namespace std;

void calculator(int *num1, int *num2 , char *action, int* res)
{
	switch (*action)
	{
	case '+':
		*res = (*num1) + (*num2);
		cout << "Result " << *res;
		break;
	case '-':
		*res = *num1 - *num2;
		cout << "Result " << *res;
		break;
	case '*':
		* res = *num1 * *num2;
		cout << "Result " << *res;
		break;
	case '/':
		*res = *num1 / *num2;
		cout << "Result " << *res;
		break;
	default: cout << "Error";
	}
}

int main()
{
	int* num1 = new int(0);
	int* num2 = new int(0);
	int* res = new int(0);
	char* action = new char('0');
	cout << "Enter number 1 : ";
	cin >> *num1;
	cout << "Enter number 2 : ";
	cin >> *num2;
	cout << "Enter  +  |  -  |  *  |  /   --> ";
	cin >> *action;

	calculator(num1, num2, action, res);
	
	return 0;
}