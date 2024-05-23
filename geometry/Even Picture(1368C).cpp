#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>>directions = {{0,1},{1,0},{0,-1},{-1,0}};



int main()
{
    int n;
    cin>>n;
    
    set<pair<int,int>>visited;
   
    queue<pair<int,int>>nq;
    for(int i=0;i<n;i++)
    {
        nq.push({i,i});
        visited.insert({i,i});
    }
    
    while(nq.empty()==false)
    {
        pair<int,int>cur = nq.front();
        nq.pop();
        
        int x = cur.first;
        int y = cur.second;
        
        for(auto k:directions)
        {
            int x1 = x+k.first;
            int y1 = y+k.second;
            
            if(visited.find({x1,y1})!=visited.end())
            continue;
            
            visited.insert({x1,y1});
        }
    }
    
    visited.insert({-1,-1});
    visited.insert({n,n});
    
    cout<<visited.size()<<endl;
    
    for(auto k:visited)
    {
        cout<<k.first<<" "<<k.second<<endl;
    }
    
   
}
