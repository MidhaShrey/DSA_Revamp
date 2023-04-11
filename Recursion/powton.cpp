#include<bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
	// base case 
	if (n == 0)
	{
		return 1;
	}
	if (x == 0)
	{
		return 1;
	}
	// int sub = power(x,n-1); // subproblem
	// cout<< x<<"*"<<n <<endl;
	return x * power(x, n - 1);
}

int main()
{
	int n = power(2,5);
	cout<< endl << "x ^ n :"<< n;
	return 0;
}