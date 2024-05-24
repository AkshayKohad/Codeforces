#include <bits/stdc++.h>
using namespace std;


#define ll long long


ll find_index(vector<ll>&dist,ll d,ll k)
{
    ll l=0;
    ll r=k-1;
    ll mid;
    while(l<=r)
    {
      mid = (l+r)/2;
      
      if(dist[mid]==d)
      return mid;
      
      if(dist[mid]>d)
      {
          r = mid-1;
      }
      else{
          l = mid+1;
      }
    }
    
    if(dist[mid]>d)
    return mid-1;
    
    return mid;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        
        vector<ll>dist(k);
        vector<ll>dist_time(k);
        
        
        for(ll i=0;i<k;i++)
        cin>>dist[i];
        
        for(ll i=0;i<k;i++)
        cin>>dist_time[i];
        
        while(q--)
        {
            ll d;
            cin>>d;
            
            if(d==0)
            {
                cout<<"0 ";
                continue;
            }
            ll index = find_index(dist,d,k);
            
            if(index==-1)
            {
                // ll  speed = (dist[index+1])/(dist_time[index+1]);
                
                // ll net_dist = d;
                
                // ll net_time = (net_dist/speed);
                
                ll net_time = d*(dist_time[index+1])/dist[index+1];
                
                ll total_time = net_time;
                
                cout<<total_time<<" ";
            }
            
            else if(d == dist[index])
            {
                cout<<dist_time[index]<<" ";
            }
            else{
                // ll  speed = (dist[index+1]-dist[index])/(dist_time[index+1]-dist_time[index]);
                
                // ll net_dist = d-dist[index];
                
                // ll net_time = (net_dist/speed);
                
                ll net_time = (d-dist[index])*(dist_time[index+1]-dist_time[index])/(dist[index+1]-dist[index]);
                ll total_time = net_time + dist_time[index];
                
                cout<<total_time<<" ";
            }
        }
        
        cout<<"\n";
    }
}
