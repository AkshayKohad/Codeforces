#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>>directions = {{1,0},{0,1}};

int solve_max(int i,int j,vector<vector<int>>&grid,int &n,int &m,vector<vector<int>>&memo_max)
{
    if(i==n-1 && j==m-1)
    return grid[i][j];
    
    
    if(memo_max[i][j]!=-1)
    return memo_max[i][j];
    
    int res = INT_MIN;
    for(auto k:directions)
    {
        int x = i+k.first;
        int y = j+k.second;
        
        if(x<0 || y<0 || x>=n || y>=m)
        continue;
        
        res = max(res,grid[i][j]+solve_max(x,y,grid,n,m,memo_max));
    }
    
    return memo_max[i][j] = res;
}


int solve_min(int i,int j,vector<vector<int>>&grid,int &n,int &m,vector<vector<int>>&memo_min)
{
    if(i==n-1 && j==m-1)
    return grid[i][j];
    
    if(memo_min[i][j]!=-1)
    return memo_min[i][j];
 
 
    int res = INT_MAX;
    for(auto k:directions)
    {
        int x = i+k.first;
        int y = j+k.second;
        
        if(x<0 || y<0 || x>=n || y>=m)
        continue;
        
        res = min(res,grid[i][j]+solve_min(x,y,grid,n,m,memo_min));
    }
    
    return memo_min[i][j] = res;
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
       
        vector<vector<int>>grid(n,vector<int>(m));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        
         if((n+m)%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<vector<int>>memo_min(n,vector<int>(m,-1));
        vector<vector<int>>memo_max(n,vector<int>(m,-1));
        
       int res_max = solve_max(0,0,grid,n,m,memo_max);
       int res_min = solve_min(0,0,grid,n,m,memo_min);
       
       //cout<<res_max<<" "<<res_min<<endl;
       if(res_max<0 || res_min>0)
       cout<<"NO"<<endl;
       
       else
       cout<<"YES"<<endl;
    }
    
}
