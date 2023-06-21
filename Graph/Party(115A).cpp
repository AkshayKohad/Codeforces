#include <bits/stdc++.h>

using namespace std;


int dfs(vector<int>&parent,int i)
{
    if(parent[i]==-1)
    return 0;
    
    return 1 + dfs(parent,parent[i]);
}
int main()
{
    int n;
    cin>>n;
    
    vector<int>parent(n+1);
    
    for(int i=1;i<=n;i++)
    {
        cin>>parent[i];
    }
    
    unordered_set<int>s;
    
    for(int i=1;i<=n;i++)
    {
        int depth = dfs(parent,i);
        
        s.insert(depth);
    }
    
    cout<<s.size();
}
