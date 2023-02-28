#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

	int number;

	cout << "Vuvedete cqlo chislo: " << endl;
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "Even = " << number;
	}
	else
	{
		cout << "Uneven = " << number;

	}

	return 0;
}