#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        string s,t;
        cin>>s>>t;
        
        string w=s;
        string v=t;
        
        sort(w.begin(),w.end());
        sort(v.begin(),v.end());
        
        if(v!=w)
        {
            cout<<"NO\n";
            continue;
        }
        
        int i=0;
        
        int cnt=n;
        
        while(i+k<n)
        {
            i++;
            cnt=cnt-2;
        }
        
        if(cnt<=0)
        {
            cout<<"YES\n";
            continue;
            
        }
        
        
        int flag=1;
        
        for(;i<min(k,n);i++)
        {
            if(s[i]!=t[i])
            {
                flag=0;
                break;
            }
        }
        
        if(flag)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}
