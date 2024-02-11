#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k,m;
        
        cin>>n>>k>>m;
        
        string s;
        cin>>s;
        
        int i=0;
        int res_cnt = 0;
        set<char>st;
        string ans;
        while(i<m)
        {
            
            string temp;
            while(i<m && st.size()<k)
            {
              int ch = s[i]-'a';
              
              if(ch<k)
              {
                  st.insert(s[i]);
                  temp.push_back(s[i]);
              }
              i++;
            }
            
            if(st.size()<k)
            {
                break;
            }
            res_cnt++;
            st.clear();
            ans.push_back(temp[temp.size()-1]);
            
        }
        
        
        if(res_cnt>=n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            char ch;
            
            int cnt = n-res_cnt;
            for(int i=0;i<k;i++)
            {
                char val = i+'a';
                
                if(st.find(val)==st.end())
                {
                    while(cnt--)
                    {
                        ch = val; 
                        ans.push_back(ch);
                    }
                    
                    break;
                }
                
               
            }
            
            cout<<ans<<endl;
        }
        
    }
}
