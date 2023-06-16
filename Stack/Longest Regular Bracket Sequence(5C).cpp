#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    stack<int>st;
    
    st.push(-1);
    
    unordered_map<int,int>mp;
    int max_result = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        
        else{
            
            int index = st.top();
            
            if(index == -1 || s[index] == ')')
            {
                st.push(i);
            }
            else{
                st.pop();
                
                int ind = st.top();
                
                max_result = max(max_result,i-ind);
                
                mp[i-ind]++;
                
                
            }
            
        }
        
        
    }
    
    if(max_result!=0)
    cout<<max_result<<" "<<mp[max_result];
    
    else
    cout<<"0 1";
}
