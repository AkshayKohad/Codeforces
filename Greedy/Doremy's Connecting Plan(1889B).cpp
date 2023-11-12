#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool mycmp(pair<ll,ll>f,pair<ll,ll>s)
{
    return f.first > s.first;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        
        vector<ll>a(n);
         
        vector<pair<ll,ll>>b(n); 
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            
            b[i] = make_pair(a[i]-c*(i+1),i+1);
        }
        
        sort(b.begin(),b.end(),mycmp);
    
        ll sum = a[0];
        int flag = 1;
        for(ll i=0;i<n;i++)
        {
            pair<ll,ll>cur = b[i];
            
            if(cur.second == 1)
            continue;
            
            ll index = cur.second;
            
            ll val = a[index-1];
            
            
            sum += val;
            
            if(sum < index*c )
            {
                
                flag=0;
                break;
                
            }
        }
        
        if(flag)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
    
    
    
    
}
