#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");

	int op;

	cout << "введите число \n";
	cin >> op;
	
	if (op < 10)
		cout << "это число меньше 10";
	else if(op = 10)
		cout << "это число 10"; 
	else if (op > 10)
		cout << "это число больше 10";




	return 0;
}

