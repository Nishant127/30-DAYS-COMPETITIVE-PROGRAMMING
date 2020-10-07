#include<bits/stdc++.h>
#define max_size 1000000000
using namespace std;
int main()
{
    bool isPrime[max_size];
    memset(isPrime,true,sizeof(isPrime));
    int i,j,k;
    for(i=2;i*i<=max_size;i++)
    {
        if(isPrime[i]==true)
        {
            for(j=i*i;j<=max_size;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=n;i<=m;i++)
        {
            if(isPrime[i]==true)
            {
                cout<<i<<endl;
            }
        }
    }
}