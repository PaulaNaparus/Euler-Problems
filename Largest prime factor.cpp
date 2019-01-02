#include <iostream>
using namespace std;
int main()
{
	long long n = 600851475143;
	int div, divmax = 0;

		div = 2;

		while (n != 1)
		{
			if (n % div == 0)
			{

				while (n % div == 0)
				{
					n /= div;
				}
				if (div > divmax)
					divmax = div;
			}
			div++;
		}
		cout << "The largest prime factor of the number 600851475143 is "<< divmax ;
		system("pause");
	}
	
	
	
