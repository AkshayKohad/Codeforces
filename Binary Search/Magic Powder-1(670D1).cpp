#include <bits/stdc++.h>

using namespace std;


bool check(int dish_val,vector<int>a,vector<int>b,int n,int k)
{
    int total_additional_req = 0;
    
    for(int i=0;i<n;i++)
    {
        total_additional_req += max(a[i]*dish_val - b[i],0);
    }
    
    if(total_additional_req <= k )
    return true;
    
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int>a(n);
    vector<int>b(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    int count_dish = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        count_dish = min(count_dish,b[i]/a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        b[i] -= a[i]*count_dish;
       // cout<<b[i]<<" ";
    }
    //cout<<endl;
    
    int l=0;
    
    int r = 0;
    
    for(int i=0;i<n;i++)
    {
        r = max(r,(b[i] + k)/a[i]);
    }
    //cout<<r<<endl;
    int ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        
        if(check(mid,a,b,n,k))
        {
            ans = mid;
            l = mid+1;
        }
        
        else{
            r = mid-1;
        }
    }
    
    // cout<<count_dish<<endl;
    // cout<<ans<<endl;
    
    cout<<count_dish + ans;
}
