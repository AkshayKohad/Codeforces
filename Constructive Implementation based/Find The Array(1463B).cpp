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
        
        ll sum = 0;
        ll sum_odd = 0;
        ll sum_even = 0;
        ll odd_cnt = 0;
        ll even_cnt = 0;
        
        
        
        for(ll i=0;i<n;i++)
        {
         cin>>a[i];
         sum += a[i];
         
         if(i%2==0)
         {
             sum_odd += a[i];
             odd_cnt++;
         }
         else{
             sum_even += a[i];
             even_cnt++;
         }
        }
        
        vector<ll>result(n);
        
        if(sum>=2*(sum_even-even_cnt))
        {
            for(ll i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    result[i] = a[i];
                }
                else{
                    result[i] = 1;
                }
            }
        }
        else{
            for(ll i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    result[i] = 1;
                }
                else{
                    result[i] = a[i];
                }
            }
        }
        
        
        for(ll i=0;i<n;i++)
        cout<<result[i]<<" ";
        
        cout<<endl;
        
    }
}
