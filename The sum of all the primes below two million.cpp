#include<iostream>
using namespace std;
int isprime(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	
		if (n%i == 0)
		
			return 1;
			return 0;
			
}
int main()
{
	int i;
	long int  a = 2000000;
	long s=2;

	for (i = 3; i < a; i++)
	{
		if (isprime(i) == 0)
		{
			s = s + i;
		}
		
	}
	cout << "The sum is: " << s;
	
	system("pause");
}