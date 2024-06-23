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
        
        string s;
        cin>>s;
        
        sort(s.begin(),s.end());
        
        if(s[0]!=s[k-1])
        {
            cout<<s[k-1]<<"\n";
            continue;
        }
        
        cout<<s[0];
        
        if(s[k]!=s[n-1])
        {
            for(int i=k;i<n;i++)
            {
                cout<<s[i];
            }
        }
        else{
            for(int i=k;i<n;i=i+k)
            {
                cout<<s[i];
            }
        }
        
        cout<<"\n";
    }
}
