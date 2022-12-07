#include <iostream>
using namespace std;

void changeValue(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	bool cheker = true;
	int num1, num2;
	cout << "Enter number 1 : ";
	cin >> num1;
	cout << "Enter number 2 : ";
	cin >> num2;

	changeValue(&num1, &num2);
	cout << "Number 1 = " << num1 << endl;
	cout << "Number 2 = " << num2 << endl;

	return 0;
}