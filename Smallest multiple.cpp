#include<iostream>
using namespace std;
int main()
{
	int m, a = 0;
	long int n = 2520;
	while (n > 0)
	{
		for (m = 11; m < 21; m++)
		{
			if (n%m == 0)
				a++;
		}
		if (a == 10)
		{
			cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is :" << n<<"\n";
			break;
		}
		a = 0;
		n = n + 20;
	}
	system("PAUSE");
}
