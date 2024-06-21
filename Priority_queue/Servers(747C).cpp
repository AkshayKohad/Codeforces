#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,q;
    cin>>n>>q;
    
    priority_queue<int,vector<int>,greater<int>>servers;
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>scheduled_status;
    
    for(int i=1;i<=n;i++)
    {
        servers.push(i);
    }
    
    while(q--)
    {
        int start,server_cnt,duration;
        
        cin>>start>>server_cnt>>duration;
        
        while(scheduled_status.size()>0)
        {
            pair<int,int>cur = scheduled_status.top();
            
            if(cur.first > start)
            break;
            
            scheduled_status.pop();
            
            servers.push(cur.second);
            
        }
        
        int sum = 0;
        
        if(server_cnt<=servers.size())
        {
            while(server_cnt--)
            {
              int server_id = servers.top();  
              
              servers.pop();
              
              sum += server_id;
              
              scheduled_status.push({start+duration,server_id}); 
               
            }
            
            cout<<sum<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}
