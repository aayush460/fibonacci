#include<bits/stdc++.h>
using namespace std;


int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	
	if(n==2)
	{
		return 1;
	}
	
	int x =  fib(n-2) + fib(n-1);
	return x;
}
int main()
{
	int n; cin >> n;
	
	cout<<fib(n);
	}	
