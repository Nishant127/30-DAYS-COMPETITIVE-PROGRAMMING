#include<bits/sdtc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>i;
        int f=1;
        f=f<<i;
        int res= f&n;
        if(res==0)
        {
            cout<<false<<endl;
        }
        else
        {
            cout<<true<<endl;
        }
        
    }
}