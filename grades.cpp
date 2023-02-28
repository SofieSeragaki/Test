#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double ocenka;
	cout << "Vuvedete ocenka: " << endl;
	cin >> ocenka;

	if (ocenka >= 5.50 && ocenka <= 6)
	{
		cout << "Excellent!" << endl;
	}
	else
	{
		cout << "Study more!" << endl;
	}

	return 0;
}