#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	bool ok = false;
	for (a = 1; a < 1000 / 3; a++) {
		for (b = a; b < 1000 / 2; b++)
		{
			c = 1000 - a - b;

			if (a * a + b * b == c * c) 
			{

				cout << "The numbers are: " << a << " " << b << " " << c << "\n";
			}
		}
	}
	system("pause");
}
