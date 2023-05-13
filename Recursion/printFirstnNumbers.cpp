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
		cout << n << " "; //This is an example of head recursion
		printToN(n - 1);
		cout << n << " "; //This is an example of tail recursion
	}
}
int main()
{
	int n;
	cin >> n;
	printToN(n);
	return 0;
}