#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=0;
        while(n>0)
        {
            count++;
            n=n&(n-1);
        }
        cout<<count<<endl;
    }
}