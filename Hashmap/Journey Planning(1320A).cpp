#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    vector<int>b(n);
    
    for(int i=0;i<n;i++)
    cin>>b[i];
    
    unordered_map<int,long long>mp;
    
    for(int i=0;i<n;i++)
    {
        int j = i+1;
        mp[j-b[i]] += b[i];
    }
    
    long long  result = 0;
    
    for(auto k:mp)
    {
        result = max(result,k.second);
    }
    
    cout<<result<<endl;
}
