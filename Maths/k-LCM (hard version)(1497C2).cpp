If n is odd, then the answer is (1,⌊n2⌋,⌊n2⌋)
If n is even, but is not a multiple of 4, then the answer is (n2−1,n2−1,2).
If n is a multiple of 4, then the answer is (n2,n4,n4).

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        ll res = n;
        n = n-(k-3);
        if(n%2!=0)
        {
            cout<<n/2<<" "<<n/2<<" 1";
        }
        else if(n%2==0 && n%4!=0)
        {
            cout<<n/2-1<<" "<<n/2-1<<" 2";
        }
        else{
            cout<<n/2<<" "<<n/4<<" "<<n/4;
        }
        
        ll val = k-3;
        while(val--)
        {
            cout<<" 1";
        }
        cout<<endl;
    }
}
