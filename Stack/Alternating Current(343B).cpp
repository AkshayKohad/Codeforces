#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>st;
    
    string s;
    cin>>s;
    
    
    for(int i=0;i<s.length();i++)
    {
        if(st.empty()==true)
        {
            st.push(s[i]);
        }
        
        else if(st.top() == s[i])
        {
            st.pop();
        }
        
        else if(st.top() != s[i])
        {
            st.push(s[i]);
        }
    }
    
    if(st.empty()==true)
    {
        cout<<"Yes";
    }
    
    else{
        cout<<"No";
    }
}
