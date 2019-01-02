#include<iostream>
using namespace std;

bool palindromnum(int num) // Functia returneaza doar true sau false - pentru ca nu avem nevoie de alte valori
{
	int n, invn = 0; // Creeam doua variabile pentru a salva numarul invers si numarul initial
	n = num; // Salvam numarul initial
	while (num)
	{ // Descompunem numarul nostru
		int a = num % 10; // Obtinem ultima cifre din numar
		invn = invn * 10 + a; // Construim numarul invers
		num = num / 10; // Taiem ultima cifra
	}
	if (n == invn) // Daca numarul initial este egal cu cel invers
		return true;
	else
		return false;
}
int main()
{
	int largestpalindrom = 0, nr;
	for (int i = 999; i >= 100; i--)
		for (int j = i; j >= 100; j--)
		{
			nr = i * j;
			if (palindromnum(nr) == true && nr > largestpalindrom)
				largestpalindrom = nr;
		}
	cout << "The largest palindrome made from the product of two 3 - digit numbers is: " << largestpalindrom<<"\n";
	system("pause");
}
