#include <bits/stdc++.h>
using namespace std;


#define ll long long 
int main() {
	
    ll t;
    cin>>t;
    
    while(t--)
    {
      ll n;
      cin>>n;
      
      vector<ll>a(2*n);
      
      for(ll i=0;i<2*n;i++)
      {
          cin>>a[i];
      }
      
      sort(a.begin(),a.end());
      
      
      // since it is even we are taking median indexes of even element that is middle2 elements
      
      ll i = n;
      
      ll j = i-1;
      
      // Result will be difference of median of indexes
      cout<<a[i]-a[j]<<endl;
    }
	return 0;
}
