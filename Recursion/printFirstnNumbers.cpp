#include <bits/stdc++.h>
using namespace std;
void printToN(int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		printToN(n - 1);
		cout << n << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	printToN(n);
	return 0;
}