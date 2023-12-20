#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n = s.length();   
    stack<char>st;
    
    int ans = 0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        else{
            if(st.empty()==false)
            {
                ans += 2;
                st.pop();
            }
        }
    }
    
    cout<<ans;
    
}
