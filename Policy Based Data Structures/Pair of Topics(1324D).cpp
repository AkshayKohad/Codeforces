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
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
        
    }
    
    PBDS stp;
    PBDS stn;
    PBDS st0;
    long long int count=0;
    
    
    for(int i=n-1;i>=0;i--)
    {
        long int k = a[i]-b[i];
        
        if(k>0)
        {
            count = count + st0.size() + stp.size() + stn.order_of_key({k,0});
            stp.insert({k,i});
        }
        
        else if(k==0)
        {
            count = count + stp.size();
            
            st0.insert({k,i});
        }
        
        else{
           
           count = count + stp.size() - stp.order_of_key({abs(k),n});
          
           
            stn.insert({abs(k),i});
        }
        
    }
    
    cout<<count<<endl;
}
