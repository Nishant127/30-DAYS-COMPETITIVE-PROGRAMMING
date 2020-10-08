#include<iostream>
using namespace std;
int knapsack01(int wt[],int val[],int w,int n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(wt[n-1]<=w)
    {
        return max(val[n-1]+ knapsack01(wt,val,w-wt[n-1],n-1),knapsack01(wt,val,w,n-1));
    }
    else
    {
        return knapsack01(wt,val,w,n-1); 
    }
}
int main()
{
  int n,w;
  cin>>n>>w;
  int i,val[n],wt[n];
  for(i=0;i<n;cin>>wt[i],i++);
  for(i=0;i<n;cin>>val[i],i++);
  cout<<knapsack01(wt,val,w,n);
}