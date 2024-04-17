#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    
    while(q--)
    {
        string s;
        string t;
        
        
        cin>>s>>t;
        
        int n = s.length();
        int m = t.length();
        
        if(m>n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(m==n)
        {
            if(s==t)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
            continue;
        }
        
        int j = n-1;
        int i = m-1;
        
        while(j>=0 && i>=0)
        {
            if(s[j]!=t[i])
            {
                j = j-2;
            }
            else{
                j--;
                i--;
            }
        }
        
        if(i<0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
