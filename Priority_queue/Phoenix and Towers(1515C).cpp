#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m,x;
        
        cin>>n>>m>>x;
        
        vector<pair<int,int>>h;
        
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            
            h.push_back({val,i});
            //h.push_back({i+1,i});
           
        }        
        
        sort(h.begin(),h.end());
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(int i=1;i<=m;i++)
        {
            pq.push({0,i});
        }
        
        vector<int>result(n);
        for(int i=n-1;i>=0;i--)
        {
            pair<int,int>cur = pq.top();
            pq.pop();
            
            pair<int,int>temp = h[i];
            
            result[temp.second] = cur.second;
            
            cur.first += temp.first;
            
            pq.push(cur);
            
        }
        
        int mini = pq.top().first;
        int maxi = pq.top().first;
        
        while(pq.size()>0)
        {
            pair<int,int>cur = pq.top();
            
            pq.pop();
            
            mini = min(mini,cur.first);
            
            maxi = max(maxi,cur.first);
        }
        
        if(maxi-mini>x)
        cout<<"NO"<<endl;
        
        else{
            cout<<"YES"<<endl;
            
            for(int i=0;i<n;i++)
            cout<<result[i]<<" ";
            
            cout<<endl;
        }
        
    }
    
    
}
