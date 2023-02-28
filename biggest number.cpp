#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a;
	int b;

	cout << "Vuvedete dve celi chisla za sravnenie: " << endl;
	cin >> a >> b;

	if (a > b)
	{
		cout << "Tova chislo e po - golqamo: " << a;
	}
	else
	{
		cout << "Tova chislo e po - golqmo: " << b;
	}

	return 0;
}