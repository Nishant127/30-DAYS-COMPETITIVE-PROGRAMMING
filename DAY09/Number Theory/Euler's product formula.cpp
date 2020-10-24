#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
	int res=n,q; 
	for(q=2;q*q<=n;q++)
	{
		if (n%q==0) 
		{
			while (n%q==0)
			{
				n/=q;
			}
			res-=res/q;
		}
	}
	if (n>1)
	{
		res-=res/n;
	}
	return res;
}
int main()
{
	int n;
	for(n=1;n<=10;n++)
	{
		cout<<"Phi"<<n<< " = "<< phi(n) << endl;
	}
	return 0;
}

