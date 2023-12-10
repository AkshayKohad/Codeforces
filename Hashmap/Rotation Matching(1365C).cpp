#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    vector<int>b(n);
    
    unordered_map<int,int>mp_a;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      
      mp_a[a[i]] = i;
    }
    
    unordered_map<int,int>mp_b;
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        
        mp_b[b[i]] = i;
    }
    
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {
        int index_a = i;
        int index_b = mp_b[a[i]];
        
        if(index_a<=index_b)
        {
            mp[index_b-index_a]++;
        }
        else{
            int val = n-1-index_a;
            
            mp[val+index_b+1]++;
        }
    }
    
    
    int result = 0;
    
    for(auto k:mp)
    {
        result = max(result,k.second);
    }
    
    cout<<result;
}
