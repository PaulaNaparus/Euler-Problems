#include <iostream>
using namespace std;
int main()
{
	long x=1, y=2,z, sum=0;
	sum = sum+ x + y;
	while (sum< 4000000)
	{
		sum = sum+ x + y;
		z = x + y;
		x = y;
		y = z;
	
	}
	cout << "The sum is: ";
		cout << sum;
		system("pause");
}