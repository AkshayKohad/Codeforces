#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start,dest;
    
    cin>>start>>dest;
    
    queue<pair<int,int>>q;
    
    unordered_set<int>visited;
    q.push({start,0});
    
    while(q.empty()==false)
    {
        pair<int,int>cur = q.front();
        q.pop();
        
        int val = cur.first;
        int moves = cur.second;
        
        if(val==dest)
        {
            cout<<moves;
            return 0;
        }
        
        int res_val = 2*val;
        
        if(val>dest || visited.find(res_val)!=visited.end())
        {
            
        }
        else{
            q.push({res_val,moves+1});
            visited.insert(res_val);
        }
        
        
        res_val = val-1;
        
        if(res_val<=0 || visited.find(res_val)!=visited.end())
        {
            
        }
        else{
            q.push({res_val,moves+1});
            visited.insert(res_val);
        }
    }
    
    
}
