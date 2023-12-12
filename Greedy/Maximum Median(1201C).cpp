#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
 ll n,k;
 cin>>n>>k;
 
 vector<ll>a(n);
 
 for(ll i=0;i<n;i++)
 {
     cin>>a[i];
 }
 
 sort(a.begin(),a.end());
 
 ll mid = n/2;
 
 vector<ll>mid_after;
 
 for(ll i=n/2;i<n;i++)
 {
     mid_after.push_back(a[i]);
 }
 
 
 ll prefix_sum = mid_after[0];
 
 for(ll i=1;i<mid_after.size();i++)
 {
     ll val = i*mid_after[i]-prefix_sum;
     
     if(val>k)
     {
         cout<<mid_after[i-1]+(k-((i)*mid_after[i-1]-prefix_sum))/i;
         return 0;
     }
     prefix_sum += mid_after[i];
 }
 
 ll m = mid_after.size()-1;
 k = k-(mid_after[m]*(mid+1)-prefix_sum);
 
 ll value = mid+1;
 
 
 
 cout<<mid_after[m] + k/value;
}
