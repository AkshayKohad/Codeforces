#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    queue<pair<int,int>>q;
    q.push({n,0});
    
    unordered_map<int,int>mp;
    
    mp[n] = 0;
    
    while(q.empty()==false)
    {
        pair<int,int>cur = q.front();
        q.pop();
        
        if(cur.first == m)
        {
         cout<<cur.second;
         break;
        }
        
        int num = cur.first;
        
        int moves = cur.second;
        
        int val = num*2;
        
        if(mp.find(val) == mp.end() && val<m*2)
        {
           mp[val] = moves+1;
                q.push({val,moves+1});
        }
        
        
        val = num-1;
        
        if(mp.find(val) == mp.end() && val>0)
        {
            mp[val] = moves+1;
                q.push({val,moves+1});
        }
        
       
    }
}
