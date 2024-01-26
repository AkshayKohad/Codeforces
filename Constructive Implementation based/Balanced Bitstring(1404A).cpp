#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        bool flag = true;
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        vector<char>v(k,'?');
        
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<n;j=j+k)
            {
                if(s[j]=='?')continue;
                
                if(v[i]=='?' || v[i]==s[j])v[i]=s[j];
                
                else if(v[i]!=s[j]) flag=false;
            }
        }
        
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<k;i++)
        {
            if(v[i]=='1')cnt1++;
            
            if(v[i]=='0')cnt2++;
        }
        
        if(cnt1>k/2 || cnt2>k/2)flag=false;
        
        if(flag)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
