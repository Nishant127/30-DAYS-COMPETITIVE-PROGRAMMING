//1 2 3 4 5 6 7 8 9 10
#include<iostream>
using namespace std;
int main()
{
    long long int t,i,n,d,x=1,j,max;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>d;
        long long int a[n];
        for(i=0;i<n;cin>>a[i],i++);
        max=d/a[n-1];
        a[n-1]=a[n-1]*max;
        j=n-2;
        while(j>-1)  
        {
            max=a[j+1]/a[j];
            a[j]=a[j]*max;
            j--;
        }
        cout<<"Case #"<<x<<": "<<a[0]<<endl;
        x++;
    }
}