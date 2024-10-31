#include <iostream>
#include <string>
using namespace std;

//Rules:  no loops:  no for-loops, no while-loops, no do-while loops, for-do loops, no for-do-whiles eithevoi

int countUp(int n)
{
	int start = 1;
	if (n == 1)
	{
		return n;

	}
	else
	{
		cout << start;
		countUp(n - 1);

	}
}
int sumA(double* A, int s, int e)
{
	if (e < s)
	{
		return 0;
	}
	else
	{
		return A[s] + sumA(A, s + 1, e);	
	}
}
int main()
{
	countUp(10);

	return 0;
}
