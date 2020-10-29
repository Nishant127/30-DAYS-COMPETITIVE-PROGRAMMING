#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int t,n,i,j,k,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        lli ans=0;
        lli d=b-a;
        for(i=0;i<32;i++)
        {
            if(d>(1<<i))
            continue;
            else
            {
                if((a&(1<<i))&&(b&(1<<i)))
                {
                    ans+=1<<i;
                }
            }
        }
        cout<<ans<<endl;
    }
}