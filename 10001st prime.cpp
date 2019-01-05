#include <iostream>
using namespace std;

int isprime (int n)
{

	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)

			return 0;
		return 1;

	
}

int main()
{
	int counter=0;
	int nr = 2;
	int a;
	while (counter < 10001) {

		if (isprime(nr) == 1)
		{
			a = nr;
			counter++;

		}
		nr++;
	}
	cout << "The 10001st prime number is " << a<<"\n";
	system("pause");


}