#include <bits/stdc++.h>
using namespace std;

void add_edge(int u,int nd,vector<int>adj[],vector<int>&deg)
{
    adj[u].push_back(nd);
    deg[nd]++;
}

int main() {
    int n;
    scanf("%d", &n);
    
    vector<string>s(n);
    
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
 
  vector<int>adj[26];
  
  vector<int>degree(26,0);
  
  for(int i=0;i<n-1;i++)
  {
    int len = s[i].length();
    int nlen = s[i+1].length();
    
    bool found=0;
    
    for(int j=0;j<len && j<nlen;j++)
    {
        if(s[i][j]!=s[i+1][j])
        {
            found=1;
            add_edge(s[i][j]-'a',s[i+1][j]-'a',adj,degree);
            break;
        }
        
    }
    
    if(found==false && len > nlen)
    {
        cout<<"Impossible\n";
        return 0;
    }
    
  }
    
    stack<int>st;
    for (int i = 0; i < 26; ++i) {
        if (degree[i] == 0) {
            st.push(i);
            degree[i] = -1;
        }
    }
    
    vector<char>ans;
        while (st.empty()==false) {
        int u = st.top();
        st.pop();
        ans.push_back('a' + u);
        for (auto nd : adj[u]) {
            --degree[nd];
            if (degree[nd] == 0) {
                degree[nd] = -1;
                 st.push(nd);
            }
        }
    }
    
  
  if(ans.size()<26)
    {
        cout<<"Impossible\n";
        return 0;
    }
    
    for(int i=0;i<26;i++)
    cout<<ans[i];
    
    cout<<"\n";
    
    return 0;
}    
