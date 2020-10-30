#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;cin>>a[i],i++);
        int count,ans=0;
        for(i=0;i<n;i++)
        {
            count=(i+1)*(n-i+2);
            if(count%2==0)
            {
                continue;
            }
            else
            {
                ans^=a[i];
            }
        }
        cout<<ans<<endl;
    }
}