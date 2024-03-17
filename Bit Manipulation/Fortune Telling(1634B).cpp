// XOR of odd ^ odd = even,  odd^even = odd, even ^ even = even



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
        
        ll even = 0;
        ll odd = 0;
        
        ll x,y;
        cin>>x>>y;
        
        for(ll i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            
            if(val%2==0)
            even++;
            
            else
            odd++;
        }
        
        if(y%2==0)
        {
            // if(x%2!=0)
            // odd++;
            
            if(x%2==0)
            {
                if(odd%2==0)
                {
                    cout<<"Alice"<<endl;
                }
                else{
                    cout<<"Bob"<<endl;
                }
            }
            else{
                if(odd%2==0)
                {
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Alice"<<endl;
                }
            }
        }
        else{
            // if(x%2!=0)
            // odd++;
            
            if(x%2==0)
            {
                if(odd%2==0)
                {
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Alice"<<endl;
                }
            }
            else{
                if(odd%2==0)
                {
                    cout<<"Alice"<<endl;
                }
                else{
                    cout<<"Bob"<<endl;
                }
            }
        }
    }
}
