// There are 2 things needed to be possible to make all elements zero:

// 1: The sum of the elements must be even.

// 2: The biggest element have to be less or equal than the sum of all the other elements.

// If both are true, the answer is "YES", otherwise "NO".



#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin>>n;
  
  vector<ll>a(n);
  
  ll sum = 0;
  
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
      sum += a[i];
  }
  
  sort(a.begin(),a.end());
  
  if(sum%2==0 && sum-a[n-1]>=a[n-1])
  {
      cout<<"YES";
  }
  else{
      cout<<"NO";
  }
  
  
  
}
