#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    vector<int>v1,v2;
    int x=0,y=0;
    while(t--)
    {
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ans^=a[i];
        }
        for(i=1;i<=n;i++)
        {
            ans^=i;
        }
        for(i=0;i<32;i++)
        {
            if(ans&(1<<i))
            {
                k=i;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]&(1<<k))
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]&(1<<k))
            {
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        } 
        for(i=0;i<v1.size();i++)
        {
            x^=v1[i];
        }
        for(i=0;i<v2.size();i++)
        {
            y^=v2[i];
        }
        cout<<x<<" "<<y<<endl;
    }
}