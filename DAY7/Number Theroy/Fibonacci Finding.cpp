#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(i=0;i<n;i++)
using namespace std;
int i,k,j;
lli ar[3];
lli I[3][3], T[3][3];
void mul(A[3][3],B[3][3],int dim)
{
    lli res[dim+1][dim+1];
    for(i=1;i<=dim;i++)
    {
        for(j=1;j<=dim;j++)
        {
            res[i][j]=0;
            for(k=1;k<=dim;k++)
            res[i][j]+=A[i][k]*b[k][j];
        }
    }
    REP(i,dim) REP(j,dim) A[i][j]= res[i][j];
}
lli getfib(int n)
{
    if(n<=2) return ar[n];
    
    I[1][1]==I[2][2]=0;
    I[1][2]==I[2][1]=1;
    
    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2];
    
    n=n-1;
    
    while(n)
    {
        if(n%2)
        mul(I,T,2),n--;
        else
        mul(T,T,2),n/=2;
    }
    
    lli fn= (a[1]*I[1][1]*a[2]*I[2][1]);
    return fn;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>ar[1]>>ar[2]>>n, n++;
        cout<<getfib(n)<<endl;
    }
}