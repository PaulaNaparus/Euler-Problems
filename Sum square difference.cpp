#include <iostream>
using namespace std;
int main()
{
	long sum = 0;
	long squared = 0;
	long rez = 0;
    int N = 100;

	sum = N * (N + 1) / 2;
	squared = (N * (N + 1) * (2 * N + 1)) / 6;

	rez = sum * sum - squared;
	cout << "the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is :\n" << rez << "\n";
	system("pause");
}
