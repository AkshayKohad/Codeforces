#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    
    cin>>n>>k;
    
    if(n==k)
    {
    cout<<1;
    return 0;
    }
    vector<int>prefix_sum(n+1,0);
    
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        prefix_sum[i] = prefix_sum[i-1] + val;
        
    }
    
    int index = -1;
    
    int sum = INT_MAX;
    
    for(int i=1;i<=n-k+1;i++)
    {
        int temp = prefix_sum[i+k-1]-prefix_sum[i-1];
        
        if(sum>temp)
        {
            sum = temp;
            index = i;
        }
    }
    
    cout<<index;
}

