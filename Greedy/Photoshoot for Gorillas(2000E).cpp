#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,m,k;
        
        cin>>n>>m>>k;
        
        ll w;
        cin>>w;
        
        ll vertical_shifts = n-k+1;
        ll horizontal_shifts = m-k+1;
        
        
        priority_queue<ll>gorillas;
        
        for(ll i=0;i<w;i++)
        {
            ll val;
            cin>>val;
            gorillas.push(val);
        }
        
        priority_queue<ll>impact_position;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll row = min(i+1,n-i);
                
                row = min(row,vertical_shifts);
                row = min(row,k);
                ll col = min(j+1,m-j);
                
                col = min(col,horizontal_shifts);
                col = col = min(col,k);
                impact_position.push(row*col);
            }
        }
        
        
        ll answer = 0;
        
        while(gorillas.size()>0)
        {
            answer += gorillas.top()*impact_position.top();
            gorillas.pop();
            impact_position.pop();
        }
        
        cout<<answer<<"\n";
        
    }
}
