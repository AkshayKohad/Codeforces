#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      
      vector<int>c(n);
      
      for(int i=0;i<n;i++)
      {
          cin>>c[i];
      }
      
      map<int,vector<int>>mp;
      map<int,vector<int>>mp2;
      for(int i=0;i<n;i++)
      {
          mp[c[i]].push_back(i);
      }
      
      priority_queue<pair<int,int>>pq;
      
      for(auto k:mp)
      {
          pq.push({k.second.size(),k.first});
      }
      
      int cur = 0;
      
      vector<int>ans(n,0);
      
      while(pq.size()>0)
      {
          pair<int,int>pr = pq.top();
          
          int sz = pr.first;
          int val = pr.second;
          
        //   cout<<val<<endl;
          pq.pop();
          
          if(sz>=k)
          {
              int w = k;
              while(w--)
              {
               ans[mp[val].back()] = (cur+1)%(k+1);
               mp2[(cur+1)%(k+1)].push_back(mp[val].back());
               mp[val].pop_back();
               cur = (cur+1)%(k+1);
              }
              cur=0;
          }
          else{
              int w = sz;
              while(w--)
              {
               if(cur==k)
               {
                   cur=0;
               }
               ans[mp[val].back()] = (cur+1)%(k+1);
               mp2[(cur+1)%(k+1)].push_back(mp[val].back());
               mp[val].pop_back();
               cur = (cur+1)%(k+1);
              }
              
          }
      }
    //   cout<<cur<<" hello"<<endl;
      int z = n-1;
      
      if(cur!=k)
      {
      while(cur!=0)
      {
          ans[mp2[cur].back()]=0;
          cur--;
          mp2[cur].pop_back();
      }
      }
      for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";
      
      cout<<endl;
      
    }
}
