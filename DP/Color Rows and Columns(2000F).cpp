#include <bits/stdc++.h>
using namespace std;

int solve(int i,int k,vector<pair<int,int>>&a,int&n,vector<vector<int>>&memo)
{
    if(k==0)
    {
        return 0;
    }
    if(i==n)
    return INT_MAX;
    
    if(memo[i][k]!=-1)
    return memo[i][k];
    
    int w = a[i].first;
    int h = a[i].second;
    
    
    int res = INT_MAX;
    
    int cur_w = w;
    int cur_h = h;
    
    for(int j=0;j<=min(k,w+h);j++)
    {
        if(j==0)
        {
         int result = solve(i+1,k-j,a,n,memo);
        
         if(result!=INT_MAX)
         res = min(result,res);
         
         continue;
        }
        int cur = min(cur_h,cur_w);
        
        int cnt = j;
        
        int val = 0;
        
        int cur_w = w;
        int cur_h = h;
        
        while(cnt--)
        {
            if(cur_w>=cur_h && cur_h!=0)
            {
                val += cur_h;
                cur_w--;
            }
            else{
                val += cur_w;
                cur_h--;
            }
        }
        
        int result = solve(i+1,k-j,a,n,memo);
        
        if(result!=INT_MAX)
        res = min(result+val,res);
        
    }
    
    return memo[i][k] = res;
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        vector<pair<int,int>>a(n);
        
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            int w,h;
            
            cin>>w>>h;
            
            a[i] = make_pair(w,h);
            
            sum += (w+h);
            
        }
        
        if(sum<k)
        {
            cout<<"-1\n";
            continue;
        }
        
        vector<vector<int>>memo(n+1,vector<int>(k+1,-1));
        cout<<solve(0,k,a,n,memo)<<"\n";
        
        
    }
}
