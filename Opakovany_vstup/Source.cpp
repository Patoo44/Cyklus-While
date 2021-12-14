#include <iostream>
using namespace std;

int main()
{
	float cislo = 1;
	float hranica = 0;

	while (cislo > hranica)
	{
		cout << "zadaj zaporne cislo" << endl;
			cin >> cislo;
	}

	while (cislo < hranica)
	{
		cout << "toto je tvoje cislo" << endl;
		cout << cislo << endl;
		break;
	}
}