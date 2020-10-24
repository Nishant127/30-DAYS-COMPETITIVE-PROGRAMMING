#include<bits/stdc++.h>
#define REP(i,n) for(i=0;i<n;i++)
using namespace std;
#define N 150
int ar[N][N], id[N][N];
int i,j,k,dim;
void mul(int A[][N],int B[][N],int dim)
{
    int res[dim+1][dim+1];
    REP(i,dim)
    {
        REP(j,dim)
        {
            res[i][j]=0;
            REP(k,dim) res[i][k]=A[i][k]*B[k][j];
        }
    }
    REP(i,dim) REP(j,dim) A[i][j]=res[i][j];
}
void printM(int A[][N],int dim)
{
    REP(i,dim)
    {
        REP(j,dim)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
void power(int A[][N],int dim,int n)
{
    REP(i,dim) REP(j,dim)
    {
        if(i==j) id[i][j]=1;
        else     id[i][j]=0;
    }
    while(n)
    {
        if(n%2)
        mul(id,A,dim),n--;
        else
        mul(A,A,dim), n/=2;
    }
    REP(i,n) REP(j,n) A[i][j]=id[i][j];
}
int main()
{
    int t,dim,n;
    cin>>t;
    while(t--)
    {
        cin>>dim>>n;
        REP(i,dim) REP(j,dim) cin>>ar[i][j];
        power(ar,dim,n);
        printM(ar,dim);
    }
}
