#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;
    
    vector<int>a(n);
    
    vector<int>res(n,0);
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum += a[i]/2;
      sum += a[i]%2;
    }
    
    if(sum>w)
    {
        cout<<"-1";
        return 0;
    }
    
    vector<pair<int,int>>tea_capacity(n);
    
    for(int i=0;i<n;i++)
    {
        tea_capacity.push_back({-a[i],i});
        
        res[i] += a[i]/2;
        res[i] += a[i]%2;
        
        w = w-res[i];
    }
    
    sort(tea_capacity.begin(),tea_capacity.end());
    
    int i=0;
    
    while(i<n && w>0)
    {
      int index = tea_capacity[i].second;
          
      int val = min(w,a[index]-res[index]);
      
      res[index] += val;
      
      w = w-val;
      
      i++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
     
}
