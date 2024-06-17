#include <bits/stdc++.h>
using namespace std;

#define boost ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    if(n%2==0)
    {
        ll val = n/2;
        ll num1 = val*val-1;
        ll num2 = val*val+1;
        
        if(num1==0 || num2==0)
        {
            cout<<"-1";
            return 0;
        }
        else{
            cout<<num1<<" "<<num2;
            return 0;
        }
    }
    else{
        ll val = n*n;
        
        ll num1 = (val-1)/2;
        ll num2 = (val+1)/2;
        
        if(num1==0 || num2==0)
        {
            cout<<"-1";
            return 0;
        }
        else{
            cout<<num1<<" "<<num2;
            return 0;
        }
    }
}
