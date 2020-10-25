#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;cin>>a[i],i++);
        int f[32]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<32;j++)
            {
                if(a[i]&(1<<j))
                {
                    f[j]++;
                }
            }
        }
        int ans=0;
        for(i=0;i<32;i++)
        {
            if(f[i]%3==1)
            {
                ans+=(1<<i);
            }
        }
        cout<<ans<<endl;
    }
}