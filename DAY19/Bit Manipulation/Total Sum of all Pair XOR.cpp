#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;cin>>a[i],i++);
        for(i=0;i<31;i++)
        {
            int cnt0=0,cnt1=0;
            for(j=0;j<n;j++)
            {
                if(a[j] & (1<<i))
                {
                    cnt1++;
                }
                else
                {
                    cnt0++;
                }
            }
            int res=cnt1*cnt0;
            ans+=(1<<i)*res;
        }
            cout<<ans<<endl;
    }
}