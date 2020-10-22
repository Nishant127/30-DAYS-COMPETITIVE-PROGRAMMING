#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans,l,r,q;
    cin>>n>>q;
    int a[n];
    int b[q][2];
    int pre[n];
    for(i=0;i<n;cin>>a[i],i++);
    for(i=0;i<q;i++)
    {
        cin>>b[i][0];
        cin>>b[i][1];
    }
    pre[0]=a[0];
    for(i=1;i<n;i++)
    {
        pre[i]=a[i]^pre[i-1];
    }
    for(i=0;i<q;i++)
    {
        l=b[i][0];
        r=b[i][1];
        if(l>0)
        {
            ans=pre[r]^pre[l-1];
        }
        else
        {
            ans=pre[r];
        }
        cout<<ans<<endl;
    }
}