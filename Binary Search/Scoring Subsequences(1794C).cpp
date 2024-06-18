#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>&a,int index)
{
    int l=0;
    int r=index;
    
    int ans=-1;
    
    while(l<=r)
    {
       int mid = (l+r)/2;
       
       if(a[mid]>=index-mid+1)
       {
           ans = mid;
           r = mid-1;
       }
       else{
           l=mid+1;
       }
    }
    
    return index-ans+1;
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
        {
            cin>>a[i];
            
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<solution(a,i)<<" ";
        }
        
        cout<<"\n";
    }
}
