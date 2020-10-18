#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
 
using namespace std;
 
lli mulmod(lli a, lli b,lli c){
    lli x = 0,y=a%c;
    while(b > 0){
    if(b%2 == 1){
        x = (x+y)%c;
    }
    y = (y*2LL)%c;
    b /= 2;
    }
    return x%c;
}
 
lli binpower(lli a , lli n , lli p)
{
	lli res = 1;
	a %= p;
 
	while(n)
	{
		if(n & 1) res = mulmod(res , a , p);
 
		n >>= 1;
		a = mulmod(a , a , p);
	}
 
	return res;
}
 
bool probablyPrimeFermat(lli n, int iter=5) {
    if (n < 4)
        return n == 2 || n == 3;
 
    for (lli i = 0; i < iter; i++) {
        lli a = 2 + rand() % (n - 3);
        if (binpower(a, n - 1, n) != 1)
            return false;
    }
    return true;
}
 
bool isPrime(lli n)
{
	return probablyPrimeFermat(n , 10);
}
 
int main()
{
	lli t , n , k;
	cin>>t;
 
	while(t--)
	{
		cin>>n>>k;
 
		if(n < 2*k)
		cout<<"No\n";
		else
		{
			if(k == 1)
			{
				if(isPrime(n))
				cout<<"Yes\n";
				else
				cout<<"No\n";
			}
			else
			if(k == 2)
			{
				if(n % 2)
				{
					if(isPrime(n - 2))
					cout<<"Yes\n";
					else
					cout<<"No\n";
				}
				else
				{
					cout<<"Yes\n";
				}
			}
			else
			cout<<"Yes\n";
		}
	}
}