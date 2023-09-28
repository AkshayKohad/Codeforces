#include <bits/stdc++.h>
using namespace std;
  
#define ll long long  
int main() {

ll n,m;
cin>>n>>m;

vector<pair<ll,ll>>dist(n,{-1,-1});

vector<pair<ll,ll>>adj[n];

  for(ll i=0;i<m;i++)
  {
      ll x,y,w;
      cin>>x>>y>>w;
      
      if(x==y)
      continue;
      
      adj[x-1].push_back({y-1,w});
      adj[y-1].push_back({x-1,w});
      
  }
  
 // queue<pair<int,int>>q;
  priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
  dist[0]={0,-1};
  q.push({0,0});
  
  while(q.empty()==false)
  {
      pair<ll,ll>cur = q.top();
      
      q.pop();
      
      ll nd = cur.second;
      ll distance = cur.first;
      
      for(auto adj_nd:adj[nd])
      {
          if((dist[adj_nd.first].first > distance + adj_nd.second) || (dist[adj_nd.first].first==-1) )
          {
              dist[adj_nd.first].first = distance + adj_nd.second;
              dist[adj_nd.first].second = nd;
              q.push({dist[adj_nd.first].first,adj_nd.first});
          }
      }
  }
  
  
  if(dist[n-1].first == -1)
  {
      cout<<"-1"<<endl;
  }
  
  else{
      ll nd = n-1;
      vector<ll>path;
      path.push_back(nd+1);
     // cout<<nd+1<<" ";
      while(dist[nd].second!=-1)
      {
          nd = dist[nd].second;
          path.push_back(nd+1);
          //cout<<nd+1<<" ";
      }
      
      for(ll i=path.size()-1;i>=0;i--)
      {
          cout<<path[i]<<" ";
      }
      //cout<<endl;
  }

	return 0;
}
