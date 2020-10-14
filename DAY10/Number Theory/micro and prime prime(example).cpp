#include<bits/stdc++.h>
#define REP(i,n) for(i=0;i<n;i++)
using namespace std;
int a[1000001];
int pp[1000001];
void sieve()
{
    int maxn=1000000;
    REP(i,maxn) a[i]=1;
    a[0]=a[1]=1;
    for(lli i=1;i*i<=maxn;i++)
    {
        if(a[i]==1)
        {
            for(lli j=i*i;j<=maxn;j+=i)
            a[j]=0;
        }
    }
    int count=0;
    REP(i,maxn)
    {
        if(a[i]==1)
        {
            count++;
        }
        if(a[count]==1)
        {
            pp[i]=1;
        }
        else
        pp[i]=0;
    }
    REP(i,maxn)
    {
        pp[i]+=pp[i-1];
    }
}
int main()
{
    seive();
    int l,r,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int count=pp[r]-pp[l-1];
        // for(;l<=r;l++)
        // {
        //     count+=pp[l];
        // }
        cout<<count<<endl;
    }
}
}