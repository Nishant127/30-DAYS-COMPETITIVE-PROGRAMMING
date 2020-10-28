// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){
    
    int i,max;
    vector<int>v,v1;
    v.push_back(arr[n-1]);
    max=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            v.push_back(arr[i]);
        }
    }
    for(i=v.size()-1;i>=0;i--)
    {
        v1.push_back(v[i]);
    }
    return v1;
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends