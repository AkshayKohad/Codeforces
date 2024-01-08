#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a,int i,int &n,int cnt,int &z,int &k,vector<vector<int>>&memo)
{
    if(i==n && cnt==z)
    {
        return 0;
    }
    
    if(i+2*cnt>k)
    return 0;
    
    if(i+2*cnt == k)
    {
        return a[i];
    }
    
    
    if(memo[i][cnt]!=-1)
    return memo[i][cnt];
    
    int res = 0;
    
    if(i>0)
    {
      if(cnt<z)
      {
          res = max(res,a[i]+solve(a,i-1,n,cnt+1,z,k,memo));
      }
      
    }
    
    if(i<n)
    {
        res = max(res,a[i]+solve(a,i+1,n,cnt,z,k,memo));
    }
    
    return memo[i][cnt] = res;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k,z;
        cin>>n>>k>>z;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        vector<vector<int>>memo(n+1,vector<int>(z+1,-1));
        cout<<solve(a,0,n,0,z,k,memo)<<endl;
    }
}
