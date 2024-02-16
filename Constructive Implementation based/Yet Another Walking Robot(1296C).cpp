#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int x = 0;
        int y = 0;
        
        map<pair<int,int>,int>mp;
        // mp[{0,0}]=0;
        int res_min = n+1;
        int res_initial = -1;
        int res_final = -1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                x -= 1;
            }
            else if(s[i]=='R')
            {
                x += 1;
            }
            else if(s[i]=='D')
            {
                y -= 1;
            }
            else if(s[i]=='U'){
                y += 1;   
            }
            
            if(x==0 && y==0)
            {
                if(res_min > i+1)
                {
                res_min = i+1;
                res_initial = 1;
                res_final = i+1;
                }
            }
            
            
            if(mp.find({x,y})!=mp.end())
            {
                int index = mp[{x,y}];
                
                if(i-index < res_min)
                {
                    res_min = i-index;
                    res_initial = index+2;
                    res_final = i+1;
                }
            }
            
            mp[{x,y}] = i;
        }
        
        
        if(res_min==n+1)
        cout<<-1<<endl;
        
        else{
            cout<<res_initial<<" "<<res_final<<endl;
        }
    }
}
