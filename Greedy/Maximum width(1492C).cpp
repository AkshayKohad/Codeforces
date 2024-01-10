#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    string s,t;
    cin>>s>>t;
    
    vector<int>min_index(m);
    vector<int>max_index(m);
    
    int j=0;
    
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[j])
        {
            min_index[j] = i;
            j++;
        }
        
        if(j==m)
        break;
    }
    
    j=m-1;
    
    for(int i=n-1;i>=0;i--)
    {
         if(s[i]==t[j])
        {
            max_index[j] = i;
            j--;
        }
        
        if(j==-1)
        break;
    }
    
    int result = 0;
    
    for(int i=0;i<m-1;i++)
    {
        int val = min_index[i];
        int val1 = max_index[i+1];
        
        result = max(result,val1-val);
    }
    
    cout<<result<<endl;
    
}
