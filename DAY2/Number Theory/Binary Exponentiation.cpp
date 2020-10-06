#include<iostream>
using namespace std;
int expo(int n,int a)
{
    int res=1;
    while(n)
    {
        if(a%2)
        res*=n, a--;
        else
        n*=n,  a/=a;
    }
    return res;
}
int main()
{
    int n,t,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        cout<<expo(n,a)<<endl;
    }
}