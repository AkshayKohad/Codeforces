#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long

bool mycmp(pair<ll,ll>&f,pair<ll,ll>&s)
{
    if(f.first == s.first)
    {
        return f.second < s.second;
    }
    
    return f.first < s.first;
}

int main()
{
    IOS
    
    ll n;
    cin>>n;
    
    ll tv1 = -1;
    ll tv2 = -1;
    
    vector<pair<ll,ll>>show_time(n);
    
    
    for(ll i=0;i<n;i++)
    {
        ll start,end;
        cin>>start>>end;
        
        show_time[i] = {start,end};
    }
    
    
    sort(show_time.begin(),show_time.end(),mycmp);
    
    ll cnt = 0;
    
    for(int i=0;i<n;i++)
    {
        ll start = show_time[i].first;
        ll end = show_time[i].second;
        
        if(tv1==-1)
        {
            tv1 = end;
            cnt++;
        }
        else if(tv2==-1){
            tv2 = end;
            cnt++;
        }
        else if(tv1 < start)
        {
            tv1 = end;
            cnt++;
        }
        else if(tv2 < start)
        {
            tv2 = end;
            cnt++;
        }
        else{
            break;
            
        }
    }
    
    if(cnt<n)
    {
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}
