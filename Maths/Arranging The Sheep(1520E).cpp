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
        
        string s;
        cin>>s;
        
        
        vector<ll>star_coordinates;
        
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                star_coordinates.push_back(i);
            }
        }
        
        ll m = star_coordinates.size();
        
        if(m==0 || m==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        ll mid = m/2;
        
        ll result = 0;
        
        ll j=mid-1;
        
        ll pos_mid = star_coordinates[mid];
        ll cnt = 1;
        while(j>=0)
        {
            result +=  pos_mid-cnt-star_coordinates[j];
            cnt++;
            j--;
        }
        
        j=mid+1;
        cnt=1;
        while(j<m)
        {
            result +=  star_coordinates[j]-pos_mid-cnt;
            cnt++;
            j++;
        }
        
        cout<<result<<endl;
        
    }
}
