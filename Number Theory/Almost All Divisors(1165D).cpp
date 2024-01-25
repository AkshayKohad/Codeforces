#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++)
        cin>>a[i];
        
        
        sort(a.begin(),a.end());
        
        ll answer = a[0]*a[n-1];
        
        vector<ll>res;
        
        for(ll i=2;i*i<=answer;i++)
        {
            if(answer%i==0)
            {
                res.push_back(i);
                ll res_val = answer/i;
                
                if(res_val!=i)
                res.push_back(answer/i);
            }
        }
        
        sort(res.begin(),res.end());
        
        
        if(res.size()!=a.size())
        {
           
            cout<<-1<<endl;
        }
        else{
            int flag=1;
            for(ll i=0;i<n;i++)
            {
                if(a[i]!=res[i])
                {
                    flag=0;
                    break;
                }
            }
            
            if(flag==1)
            {
                cout<<answer<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }

}
