#include <bits/stdc++.h>
using namespace std;

pair<int,int>solve(int i,vector<int>adj[],vector<int>&color,int &res)
{
    int white = 0;
    int black = 0;
    
    for(auto u:adj[i])
    {
        pair<int,int>cur = solve(u,adj,color,res);
        
        white += cur.first;
        black += cur.second;
    }
    
    if(color[i]==0)
    white++;
    
    else
    black++;
    
    if(white==black)
    res++;
    
    return {white,black};
}
int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    int n;
    cin>>n;
    
    vector<int>adj[n+1];
    
    for(int i=1;i<=n-1;i++)
    {
        int val;
        cin>>val;
        
        adj[val].push_back(i+1);
    }
    
    vector<int>color(n+1);
    for(int i=1;i<=n;i++)
    {
        char ch;
        cin>>ch;
        
        if(ch=='W')
        color[i]=0;
        
        else
        color[i]=1;
    }
    
    int res = 0;
    solve(1,adj,color,res);
    
    cout<<res<<"\n";
  }
}
