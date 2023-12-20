#include <bits/stdc++.h>
using namespace std;


int find(int i,vector<int>&parent)
{
    if(parent[i]==-1)
    return i;
    
    return parent[i] = find(parent[i],parent);
}


void unite(int user,int user1,vector<int>&parent,vector<int>&rank)
{
    int par = find(user,parent);
    int par1 = find(user1,parent);
    
    if(par!=par1)
    {
        if(rank[par]>=rank[par1])
        {
            parent[par1] = par;
            rank[par] += rank[par1];
        }
        else{
            parent[par] = par1;
            rank[par1] += rank[par];
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>parent(n+1,-1);
    vector<int>rank(n+1,1);
    
    for(int i=0;i<m;i++)
    {
        int sz;
        cin>>sz;
        
        int first;
        for(int j=0;j<sz;j++)
        {
            int user;
            cin>>user;
            
            if(j==0)
            {
             first=user;
             continue;
            }
            
            unite(first,user,parent,rank);
            
        }
    }
    
    
    for(int i=1;i<=n;i++)
    {
        if(parent[i]==-1)
        {
            cout<<rank[i]<<" ";
        }
        else{
            int par = find(i,parent);
            
            cout<<rank[par]<<" ";
        }
    }
}
