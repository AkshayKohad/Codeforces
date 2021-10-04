#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<long int,long int>,null_type,less<pair<long int,long int>>,rb_tree_tag,tree_order_statistics_node_update>PBDS;

int main()
{
    int n;
    cin>>n;
    long int a[n];
    long int b[n];
    long int c[n];   // a[i]+a[j]>b[i]+b[j]  -> a[i]-b[i]> b[j]-a[j]  ->  if c[i]= a[i]-b[i] 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];  
    }
    
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
  for(int i=0;i<n;i++)
    {
        c[i] = a[i]-b[i];   
    }
    
   
    PBDS st;
    long long int ans=0;
    
    for(int i=0;i<n;i++)
    {
      ans += st.size()-st.order_of_key({-c[i],10000000});
      st.insert({c[i],i});
    }
   
    
    cout<<ans<<endl;
}
