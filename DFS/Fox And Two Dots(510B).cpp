#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>>directions = {{1,0},{0,1},{-1,0},{0,-1}};

bool dfs(int i,int j,vector<vector<char>>&matrix,vector<vector<int>>&visited,int par_x,int par_y,int n,int m)
{
    visited[i][j] = 1;
    
    for(auto k:directions)
    {
        int x = i+k.first;
        int y = j+k.second;
        
        if(x<0 || y<0 || x>=n || y>=m || matrix[x][y]!=matrix[i][j])
        continue;
        if(visited[x][y]==0)
        {
            if(dfs(x,y,matrix,visited,i,j,n,m))
            return true;
            
        }
        else{
            
            if(par_x!=x && par_y!=y)
            {
                
                return true;
            }
            
        }
    }
    
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>>matrix(n,vector<char>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>matrix[i][j];
    }
    
    vector<vector<int>>visited(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]==0)
            {
                
                bool res = dfs(i,j,matrix,visited,-1,-1,n,m);
                
                if(res)
                {
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    
    cout<<"No";
}
