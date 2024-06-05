#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long

int main()
{
    IOS
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        map<ll,ll>mp;
        
        for(ll i=0;i<n;i++)
        {
          ll val;
          cin>>val;
          
          mp[val]++;
        }
        
        ll alice_start = -1;
        ll flag=0;
        
        for(int i=0;i<=n;i++)
        {
            if(mp[i]==0)
            {
                flag=1;
                cout<<i<<"\n";
                break;
            }
            
            else if(mp[i]==1)
            {
                alice_start = i;
                break;
            }
        }
        
       if(flag==1)
        continue;
        else if(alice_start==-1)
        {
            cout<<n+1<<"\n";
            flag=1;
            continue;
        }

        for(ll i=alice_start+1;i<=n;i++)
        {
            if(mp[i]==0 || mp[i]==1)
            {
                flag=1;
                cout<<i<<"\n";
                break;
            }
        }
        
        if(flag==0)
        cout<<n+1<<"\n";  
    }
}
