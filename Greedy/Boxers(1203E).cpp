#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    map<int,int>mp;
    
    
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    int res = 0;
    
    for(int i=n-1;i>=0;i--)
    {
       if(mp[a[i]+1]==0)
       {
           mp[a[i]+1]++;
           res++;
           
           continue;
           
       }
       if(mp[a[i]]==0)
       {
           mp[a[i]]++;
           res++;
           continue;
       }
       if(a[i]-1 > 0 && mp[a[i]-1]==0)
       {
           mp[a[i]-1]--;
           res++;
           continue;
       }
       
    }
    
    cout<<res<<endl;
    
}
