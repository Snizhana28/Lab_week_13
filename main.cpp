#include <iostream>
using namespace std;

void positive(int* num, bool* cheker)
{
	if (*num > 0)
		*cheker = true;
	else
		*cheker = false;
}


int main()
{
	bool cheker = true;
	int num;
	cout << "Enter number : ";
	cin >> num;

	positive(&num, &cheker);

	if (cheker)
		cout << endl << "Number " << num << " is positive (+)" << endl;
	else															  
		cout << endl << "Number " << num << " is negative (-)" << endl;
	return 0;
}