#include <bits/stdc++.h>
using namespace std;


#define ll long long 

bool mycmp(vector<ll>&f,vector<ll>&s)
{
    if(f[0]==s[0])
    {
        if(f[1] == s[1])
        return f[2] > s[2];
        
        
        return f[1] > s[1];  
    }
    
    return f[0] < s[0];
}


int main()
{
  ll n;
  cin>>n;
  
  vector<vector<ll>>a(n);
  
  for(ll i=0;i<n;i++)
  {
   ll l,r;
   cin>>l>>r;
   a[i] = {l,r,i};
  }
  sort(a.begin(),a.end(),mycmp);
  
  
  for(int i=0;i<n-1;i++)
  {
      vector<ll>prev = a[i];
      vector<ll>next = a[i+1];
      
      if(prev[0]<=next[0] && prev[1]>=next[1])
      {
          cout<<next[2]+1<<" "<<prev[2]+1<<endl;
          return 0;
      }
  }
  
  cout<<"-1 -1"<<endl;
  
}
