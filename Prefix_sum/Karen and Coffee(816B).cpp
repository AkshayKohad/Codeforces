#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    
    vector<int>a(200002,0);
    
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        
        a[l]++;
        a[r+1]--;
         
    }
    
    for(int i=1;i<=200000;i++)
    {
        a[i] = a[i] + a[i-1];
    }
    
    vector<int>res(200002,0);
    
    for(int i=0;i<=200000;i++)
    {
        if(a[i]>=k)
        res[i]++;
    }
    
    for(int i=1;i<=200000;i++)
    {
        res[i] = res[i] + res[i-1];
    }
    
   
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        
        cout<<res[r]-res[l-1]<<endl;
    }
}
