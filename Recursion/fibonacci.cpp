#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if (n == 0 or n == 1)
	{
		return n;
	}
	else
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin >> n;
	int i = 0;
	while(i<n)
	{
		cout<<fibo(i++)<<endl;
	}
	// cout << fibo(n) << endl;
	return 0;
}