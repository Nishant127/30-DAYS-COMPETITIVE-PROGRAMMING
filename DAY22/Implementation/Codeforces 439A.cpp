#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,c=0,d,s=0;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(((n-1)*10+s)<=d)
    {
        c=((n-1)*10)/5;
        c+=(d-(s+((n-1)*10)))/5;
        cout<<c;
    }
    else
    {
        cout<<-1;
    }
}