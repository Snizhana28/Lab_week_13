#include <iostream>
using namespace std;

void Max_number(int* num1, int* num2, int** pt_max)
{
	if (*num1 > *num2)
		*pt_max = num1;
	else
		*pt_max = num2;
}

int main()
{
	int* pt;
	int num1, num2;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;

	if (num1 == num2)
	{
		cout << endl << "Number 1 = Number2" << endl;
	}
	else 
	{
		Max_number(&num1, &num2, &pt);
		cout << endl << "Max number: " << *pt << endl;
	}
 return 0;
}