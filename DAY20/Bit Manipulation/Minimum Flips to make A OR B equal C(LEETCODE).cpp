#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int ans=0;
        for(i=0;i<32;i++)
        {
            bool x=false,y=false,z=false;
            if(a & (1<<i))
            {
                x=true;
            }
            if(b & (1<<i))
            {
                y=true;
            }
            if(c & (1<<i))
            {
                z=true;
            }
            if(z==false)
            {
                if(x==true and y==true)
                {
                    ans+=2;
                }
                else if(x==true or y==true)
                {
                    ans+=1;
                }
            }
            else
            {
                if(x==false and y==false)
                {
                    ans+=1;
                }
            }
        }
        cout<<ans<<endl;
    }
}