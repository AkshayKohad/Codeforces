#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>prime_factors(1000001,-1);
    
    for(int i=2;i*i<=1000000;i++)
    {
        for(int j=i*i;j<=1000000;j=j+i)
        {
            if(prime_factors[j]==-1)
            prime_factors[j] = i;
            
        }
    }
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            int val = a[i];
            
            if(val==1)
            continue;
            
            while(prime_factors[val]!=-1)
            {
                mp[prime_factors[val]]++;
                val = val/prime_factors[val];
            }
            
            mp[val]++;
        }
        
        int flag=1;
        
        for(auto k:mp)
        {
            if(k.second%n!=0)
            {
                flag=0;
                break;
            }
        }
        
        if(flag)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}
