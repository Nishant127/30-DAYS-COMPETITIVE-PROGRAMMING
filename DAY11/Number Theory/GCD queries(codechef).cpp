#include<bits/stdc++.h>
using namespace std;
int pre[100005],suff[100005],a[100005];
int main()
{
    int t,l,r,n,q,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=0;i<n;cin>>a[i],i++);
        pre[0]=suff[n+1]=0;
        for(i=1;i<n;i++)
        {
            pre[i]=__gcd(a[i],pre[i-1]);
        }
        for(i=n;i>=0;i--)
        {
            suff[i]=__gcd(a[i],suff[i+1]);
        }      
        while(q--)
        {
            cin>>l>>r;
            cout<<__gcd(pre[l-1],suff[r+1])<<endl;
        }
    }
}