#include <bits/stdc++.h>
using namespace std;

#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<ll, __gnu_pbds::null_type, less<ll>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

int main(){
 
 ll t;
 cin>>t;
 
 while(t--)
 {
     ll n;
     cin>>n;
     
     vector<pair<ll,ll>>a(n);
     
     ordered_set st;
     
     for(ll i=0;i<n;i++)
     {
         ll val1,val2;
         cin>>val1>>val2;
         
         a[i] = {val1,val2};
         
         st.insert(val2);
         
     }
     
     sort(a.begin(),a.end());
     
     ll result = 0;
     
     for(ll i=0;i<n;i++)
     {
         ll val = a[i].second;
         
         result += st.order_of_key(val);
         
         st.erase(val);
     }
     
     cout<<result<<endl;
     
     
 }
}
