#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
    
    string l,r;
    cin>>l>>r;
    
   
    
    ll n = r.length();
    ll m = l.length();
    
    string temp;
    while(n>m)
    {
        temp.push_back('0');
        m++;
    }
    
    l = temp+l;
    
    
   ll result = 0;
   ll prev_val = 0;
   
   for(int i=0;i<m;i++)
   {
       ll l_val = l[i]-'0';
       ll r_val = r[i]-'0';
       ll cur_val = prev_val*10 - l_val + r_val;
       
       result += cur_val;
       
       prev_val = cur_val;
   }
   
   cout<<result<<endl;
  }
  
}
