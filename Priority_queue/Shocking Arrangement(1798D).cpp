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
       
        ll cnt_zero = 0;
        
        priority_queue<ll>pq_neg;
        priority_queue<ll>pq_pos;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            
            
            if(a[i]==0){
                cnt_zero++;
            }
        }
        
        
        
        if(cnt_zero==n)
        {
            cout<<"No\n";
            continue;
        }
        
        
        
        cout<<"Yes\n";
        
        for(ll i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                pq_neg.push(-a[i]);
            }
            else{
                pq_pos.push(a[i]);
            }
        }
        
        ll max_val = pq_pos.top()+pq_neg.top();
        
        ll pos_sum = 0;
        ll neg_sum=0;
        ll net_sum = pos_sum-neg_sum;
        while(pq_pos.size()>0 && pq_neg.size()>0)
        {
           
           while(net_sum>=0 && pq_neg.size()>0)
           {
            neg_sum += pq_neg.top();
            ll val = pq_neg.top();
            pq_neg.pop();
            cout<<-val<<" ";
            net_sum = pos_sum-neg_sum;
            
           }
            
            net_sum = pos_sum-neg_sum;
            
            while(net_sum<0 && pq_pos.size()>0)
            {
                pos_sum += pq_pos.top();
                ll val = pq_pos.top();
                
                pq_pos.pop();
                
                cout<<val<<" ";
                net_sum = pos_sum-neg_sum;
            }
        }
        
        while(pq_neg.size()>0)
            {
              
                ll val = pq_neg.top();
                pq_neg.pop();
                
                cout<<-val<<" ";
            }
            
            while(pq_pos.size()>0)
            {
               // net_sum += pq_pos.top();
                ll val = pq_pos.top();
                pq_pos.pop();
                
                cout<<val<<" ";
            }
            
            cout<<"\n";
    }
}
