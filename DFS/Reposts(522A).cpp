#include <bits/stdc++.h>
using namespace std;


int solve(string root,map<string,vector<string>>&mp,set<string>&visited)
{
    visited.insert(root);
    
    int res = 0;
    for(auto k: mp[root])
    {
        if(visited.find(k)==visited.end())
        {
            res = max(res,solve(k,mp,visited));
        }
    }
    
    return res+1;
}

int main() {
    
    int repost_count;
    cin>>repost_count;
    
    map<string,vector<string>>mp;
    
    string root;
    for(int i=0;i<repost_count;i++)
    {
        string user;
        cin>>user;
        string k;
        cin>>k;
        
        string source;
        cin>>source;
        
        transform(source.begin(), source.end(), source.begin(), ::tolower);
        transform(user.begin(), user.end(), user.begin(), ::tolower);
        
        if(i==0)
        {
         root=source;
         
        }
        mp[source].push_back(user);
    }
    
    set<string>visited;
    cout<<solve(root,mp,visited);
    
    
	return 0;
}
