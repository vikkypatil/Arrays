// LeftRotate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		gcd(b, a%b);
}
void leftRotate(int *a, int n, int d)
{
	int i, j, k, temp;
	for (i = 0; i < gcd(n, d); i++)
	{
		temp = a[i];
		j = i;
		while (1)
		{
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			j = j + d;
		}
		a[j] = temp;
	}
}
int main()
{
	int a = { 1,2,3,4 };
	leftRotate(a,)
	std::cout << gcd(8, 10)<<"\n";
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
