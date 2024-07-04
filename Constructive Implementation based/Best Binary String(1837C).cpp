#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        
        char prev = '0';
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            s[i] = prev;
            
            else
            prev = s[i];
        }
        
        cout<<s<<"\n";
    }
}
