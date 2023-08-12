// If we only iterate on the place of 'A', we can get the number of 'Q' before and after it using prefix sums,
// and it leads to O(n) solution.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string a;
    cin>>a;
    
    ll n = a.length();
    vector<ll>prefix_sum_of_q(n+1,0);
    
    
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]=='Q')
        prefix_sum_of_q[i] = prefix_sum_of_q[i-1] + 1;
        
        else
        prefix_sum_of_q[i] = prefix_sum_of_q[i-1];
    }
  
    ll result = 0;
    
    for(ll i=1;i<=n;i++)
    {
        if(a[i-1]=='A')
        {
            
            result += prefix_sum_of_q[i-1]*(prefix_sum_of_q[n]-prefix_sum_of_q[i]);
        }
    }
    
    cout<<result;
    
}
