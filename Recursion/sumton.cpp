#include<bits/stdc++.h>
using namespace std;

int sumton(int n)
{
	if (n == 0)
	{
		return 0;
	}
	
	return n + sumton(n-1);
}

int main()
{
	int sum = sumton(10);
	cout<< "sum is "<<sum;
	return 0;
}