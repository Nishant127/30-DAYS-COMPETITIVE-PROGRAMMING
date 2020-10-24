#include<bits/stdc++.h>
#define NUM 1000
using namespace std;
int dp[1000][1000];
int knapsack01(int wt[],int val[],int w,int n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(dp[n][w]!=-1)
    {
        return dp[n][w];
    }
    if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+ knapsack01(wt,val,w-wt[n-1],n-1),knapsack01(wt,val,w,n-1));
    }
    else
    {
        return dp[n][w]=knapsack01(wt,val,w,n-1); 
    }
}
int main()
{
memset(dp,-1,sizeof dp );
  int n,w,j,p;
  cin>>n>>w;
  int i,val[n],wt[n];
  for(i=0;i<n;cin>>wt[i],i++);
  for(i=0;i<n;cin>>val[i],i++);
  cout<<knapsack01(wt,val,w,n);
}
