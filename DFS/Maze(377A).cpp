#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>directions = {{1,0},{0,1},{-1,0},{0,-1}};

void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&visited,int &n,int &m,int &res_s)
{
    if(res_s<=0)
    return;
    
    visited[i][j] = 1;
    int cnt=0;
    for(auto w:directions)
    {
        int x = i+w.first;
        int y = j+w.second;
        
        if(x<0 || y<0 || x>=n || y>=m || visited[x][y]==1 || grid[x][y]=='#' || res_s<=0)
        continue;
        
        
        res_s--;
        grid[x][y] = '$';
        dfs(x,y,grid,visited,n,m,res_s);
        
    }
    
    
    return;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<vector<char>>grid(n,vector<char>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    
    int x,y;
    int s=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.')
            {
                x = i;
                y = j;
                s++;
            }
        }
    }
    
    int res_s = s-k;
 //   cout<<res_s<<endl;
    vector<vector<int>>visited(n,vector<int>(m,0));
  //  visited[x][y] = 1;
    
    res_s--;
    grid[x][y] = '$';
    dfs(x,y,grid,visited,n,m,res_s);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='$')
            grid[i][j] = '.';
            
            else if(grid[i][j]=='.')
            grid[i][j] = 'X';
            
           cout<<grid[i][j];
        }
        cout<<endl;
    }
}
