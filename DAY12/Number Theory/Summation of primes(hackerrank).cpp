#include <bits/stdc++.h>
using namespace std;
        bool isPrime[1000005];
        vector<long long int>v(1000005,0);
void sp()
{
        long long int sum=0,i,j;
        memset(isPrime, true, sizeof(isPrime));
        for(i=2;i*i<1000005;i++)
        {
            if(isPrime[i])
            {
                for(j=i*i;j<1000005;j+=i)
                {
                    isPrime[j]=false;
                }
            }
        }
        for(i=2;i<1000005;i++)
        {
            if(isPrime[i])
            {
                sum+=i;
            }
            v[i]=sum;
        }    
}
int main()
{
    long long int t,n;
    cin>>t;
    sp();
    while(t--)
    {
        cin>>n;
        cout<<v[n]<<endl;
    }
}
