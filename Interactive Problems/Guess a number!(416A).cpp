#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll check(ll mid,ll &val)
{
  //  cout<<mid<<endl;
    
    string op;
    ll num;
    string status;
    cin>>op>>num>>status;
   // cout<<op<<" "<<num<<" "<<status<<endl;
   // >= 1 
   // < 2
   // <= 3
   // > 4
   
   val = num;
   
   if(op==">=")
   {
       if(status=="Y")
       return 1;
       
       else
       return 2;
   }
   else if(op=="<")
   {
       if(status=="Y")
       return 2;
       
       else
       return 1;
   }
   else if(op=="<=")
   {
       if(status=="Y")
       return 3;
       
       else
       return 4;
   }
   else{
       if(status=="Y")
       return 4;
       
       else
       return 3;
   }
   
   return 0;
}
int main()
{
    
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    ll n;
    cin>>n;
    
    ll l = -1000000001;
    ll r =  1000000001;
    
    ll ans = -1;
    
    while(n-- && l<=r)
    {
        ll mid = (l+r)/2;
        ll val;
        ll query = check(mid,val);
        
        if(query==1)
        {
            l = max(l,val);
        }
        else if(query==2)
        {
            r = min(r,val-1);
        }
        else if(query==3)
        {
            r = min(r,val);
        }
        else{
            l = max(l,val+1);
        }
        
    }
    
    //cout<<l<<" "<<r<<endl;
    
    if(l>r)
    {
        cout<<"Impossible"<<endl;
    }
    
    else{
      ll mid = (l+r)/2;
      cout<<mid<<endl;
    }
}
