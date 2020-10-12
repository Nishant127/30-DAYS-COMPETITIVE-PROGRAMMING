#include <bits/stdc++.h>
using namespace std; 
int phi(int n) 
{ 
	int answer = 1; 
	for (int i = 2; i < n; i++) 
	{
		if (__gcd(i, n) == 1) 
		{
			answer++;		    
		}
	}
	return answer; 
} 
int main() 
{ 
	int n; 
	for (n = 1; n <= 20; n++) 
		cout << "phi("<<n<<") = " << phi(n) << endl; 
	return 0; 
} 


