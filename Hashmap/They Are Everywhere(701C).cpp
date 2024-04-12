#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    set<char>st;
    
    for(int i=0;i<n;i++)
    {
       st.insert(s[i]);    
    }
    
    int tot = st.size();
    
    map<char,int>mp_count;
    
    int res = n+1;
    
    int i=0;
    int j=0;
    while(j<n)
    {
        mp_count[s[j]]++;
        
        if(mp_count.size()<tot)
        {
            j++;
            continue;
        }
        
        while(mp_count[s[i]]>1)
        {
            mp_count[s[i]]--;
            i++;
            
        }
        
        res = min(res,j-i+1);
        j++;
    }
    
    cout<<res<<endl;
    
}
