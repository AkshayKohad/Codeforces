#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
  ll n,k;
  cin>>n>>k;
  
  deque<ll>dq;
  
  unordered_set<ll>s;
  
  for(int i=0;i<n;i++)
  {
      ll val;
      cin>>val;
      if(dq.size()<k)
      {
          if(s.find(val)==s.end())
          {
              dq.push_front(val);
              s.insert(val);
          }
      }
      else{
          if(s.find(val)==s.end())
          {
              int temp_val = dq.back();
              dq.pop_back();
              dq.push_front(val);
              s.erase(temp_val);
              s.insert(val);
              
              
          }
      }
  }
  
  cout<<dq.size()<<endl;
  
  while(dq.empty()==false)
  {
      cout<<dq.front()<<" ";
      dq.pop_front();
      
  }
  
}
