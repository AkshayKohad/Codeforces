#include <bits/stdc++.h>
using namespace std;


int find(int i,vector<int>&parent)
{
    if(parent[i]==-1)return i;
    
    return parent[i] = find(parent[i],parent);
}

void unite(int par1,int par2,vector<int>&parent,vector<int>&rank)
{
    if(rank[par1]>=rank[par2])
    {
        parent[par2] = par1;
        rank[par1] += rank[par2]; 
    }
    else{
        parent[par1] = par2;
        rank[par2] += rank[par1];
    }
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n+1);
        
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            
        }
        
        vector<int>parent(n+1,-1);
        vector<int>rank(n+1,1);
        
        vector<int>iscycle(n+1,0);
        
        set<pair<int,int>>visited;
        for(int i=1;i<=n;i++)
        {
            int min_val = min(i,a[i]);
            int max_val = max(i,a[i]);
            
            if(visited.find({min_val,max_val})!=visited.end())
            continue;
            
            visited.insert({min_val,max_val});
            
            int par1 = find(i,parent);
            int par2 = find(a[i],parent);
            
            if(par1==par2)
            {
                iscycle[par1]=1;
            }
            else{
                unite(par1,par2,parent,rank);
            }
        }
        
        int cnt_cycle = 0;
        int cnt_not_cycle = 0;
        
        for(int i=1;i<=n;i++)
        {
          if(parent[i]==-1)
          {
              if(iscycle[i]==1)
              {
                  if(rank[i]<=2)
                  {
                      cnt_not_cycle++;
                  }
                  else{
                      cnt_cycle++;
                  }
              }
              else{
                  cnt_not_cycle++;
              }
          }
        }
        
    
        
        int res_val = 0;
        if(cnt_not_cycle>0)
        {
            res_val = 1;
        }
        int mini = cnt_cycle + res_val;
        int maxi = cnt_cycle + cnt_not_cycle;
        
        cout<<mini<<" "<<maxi<<endl;
        
    }
}
