// Binary Search + Combinatorics


#include <bits/stdc++.h>
using namespace std;

int find_index(vector<int>&a,int r,int val)
{
    int l=0;
    
    val = val-2;
    
    int mid;
    while(l<r)
    {
        mid = (l+r)/2;
        
        if(a[mid]>=val)
        r = mid-1;
        
        else
        l = mid+1;
    }
    
    r = max(r,0);
    
    if(a[r]<val)
    r++;
    
    return r;
    
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        if(n<=2)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        
        sort(a.begin(),a.end());
        
        long long int result = 0;
        
        
        for(int i=n-1;i>=2;i--)
        {
            int index = find_index(a,i-1,a[i]);
            
            long long int cnt = i-index;
            
            long long int total = cnt*(cnt-1);
            
            total = total/2;
            
            result += total;
        }
        
        cout<<result<<endl;
    }
}
