#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n * factorial(n-1);
}

int main()
{
	int result = factorial(5);
	cout<< "factorial is "<<result;
	return 0;
}