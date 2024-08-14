#include <bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    ll n;
    cin>>n;
    
    
    if (n==2){cout<<1; return 0;}
    
    if (n==3){cout<<2; return 0;}
    
    ll a = 2; 
    ll b = 3; 
    int res = 2; ll c;
    while(true){
        ++res;
        c = a + b;
        if (c > n) break;
        a = b;
        b = c;
    }
    cout<<res-1;
}
