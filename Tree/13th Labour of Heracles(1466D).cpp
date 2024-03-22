#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>weights(n+1,0);
        
        for(int i=1;i<=n;i++)
        cin>>weights[i];
        
        vector<int>cnt_adj(n+1);
        
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            
            cnt_adj[u]++;
            cnt_adj[v]++;
            
        }
        
        
        for(int i=1;i<=n;i++)
        {
            cnt_adj[i]--;
        }
       
        
        
        vector<pair<int,int>>node_val;
        
        int cnt_color = n-1;
        
        for(int i=1;i<=n;i++)
        {
            node_val.push_back({weights[i],i});
        }
        
        sort(node_val.begin(),node_val.end());
        
        long long int res_sum = 0;
        
        for(int i=1;i<=n;i++)
        res_sum += weights[i];
        
        cout<<res_sum<<" ";
        cnt_color--;
        
        int ind = node_val.size()-1;
        
        while(cnt_color)
        {
            long long int value = node_val[ind].first;
            int freq = cnt_adj[node_val[ind].second];
            
            if(freq==0)
            {
                ind--;
                continue;
            }
         
            res_sum+=value;
            freq--;
            cnt_color--;
            
            cnt_adj[node_val[ind].second] = freq;
            
            cout<<res_sum<<" ";
            
           
        }
        
        cout<<endl;
        
    }
}
