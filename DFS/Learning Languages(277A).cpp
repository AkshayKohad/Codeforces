#include <bits/stdc++.h>
using namespace std;


void dfs(int src,vector<int>adj_emp[],vector<int>adj_language[],vector<int>&visited)
{
    visited[src] = 1;
    
    for(auto l : adj_emp[src])
    {
        for(auto e: adj_language[l])
        {
            if(visited[e]==0)
            {
                dfs(e,adj_emp,adj_language,visited);
            }
        }
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>adj_emp[n];
    vector<int>adj_language[m+1];
    
    int empty = 0;
    
    for(int i=0;i<n;i++)
    {
        int sz;
        cin>>sz;
        
        if(sz==0)
        empty++;
        
        for(int j=0;j<sz;j++)
        {
            int lang;
            cin>>lang;
            
            adj_emp[i].push_back(lang);
            adj_language[lang].push_back(i);
        }
    }
    
    vector<int>visited(n,0);
    
    int dollar = 0;
    
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            dollar++;
            
            dfs(i,adj_emp,adj_language,visited);
        }
    }
    
    if(empty<=dollar-1)
    cout<<dollar-1<<endl;
    
    else
    cout<<dollar<<endl;
}
