#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k,w,n;
    
    cin>>k>>n>>w;
    
    ll total_banana_cost = k*w*(w+1);
    
    total_banana_cost/=2;
    
    if(total_banana_cost<=n)
    cout<<"0"<<endl;
    
    else
    cout<<total_banana_cost-n<<endl;
    
    return 0;
    
}
