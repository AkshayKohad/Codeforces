#include <bits/stdc++.h>
using namespace std;

pair<int,int> solve(int root,vector<int>adj[],vector<int>&result,vector<int>&respect_nd,int &main_root)
{
    int children = 0;
    int non_respect_cnt = 0;
    
    for(auto u : adj[root])
    {
        
        pair<int,int>val = solve(u,adj,result,respect_nd,main_root);
        
        
        children+=val.first;
        non_respect_cnt+=val.second;
    }
    
    //cout<<root<<" "<<children<<" "<<non_respect_cnt<<endl;
    
    if(respect_nd[root]==1)
    {
        
      if(children==non_respect_cnt && root!=main_root)
      result.push_back(root);
      
      
      non_respect_cnt++;
    }
    
    return {1,respect_nd[root]};
}

int main()
{
    int n;
    cin>>n;
    
     vector<int>adj[n+1];
     vector<int>respect_nd(n+1);
     int root = -1;
    for(int i=1;i<=n;i++)
    {
        int parent,respect;

        cin>>parent>>respect;
        
        if(parent!=-1)
        adj[parent].push_back(i);
        
        else
        root = i;
        
        respect_nd[i] = respect;
        
    }
    
    vector<int>result;
    solve(root,adj,result,respect_nd,root);
    
    
    if(result.size()==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    sort(result.begin(),result.end());
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    
    cout<<endl;
   
}
