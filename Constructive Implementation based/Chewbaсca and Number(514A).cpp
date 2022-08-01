#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    cin>>s;
    int n = s.length();
    
    
    for(int i=0;i<n;i++)
    {
        int x = s[i]-'0';
        //cout<<x;
        if(x>9-x)
        {
            int res = 9-x;
            if(res==0 && i==0)
            continue;
            char ch = res + '0';
            
           // cout<<ch;
            s[i] = ch;
        }
        
    }
    
    cout<<s;
}
