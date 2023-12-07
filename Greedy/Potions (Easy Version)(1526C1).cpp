#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    
    ll sum = 0;
    ll result = 0;
    for(ll i=0;i<n;i++)
    {
        sum += a[i];
        
        result++;
        
        if(a[i]<0)
        pq.push(a[i]);
        
        if(sum<0)
        {
            while(sum<0 && pq.size()>0)
            {
                sum -= pq.top();
                result--;
                pq.pop();
            }
        }
    }
    
    cout<<result;
}
