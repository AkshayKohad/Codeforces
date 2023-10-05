#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x==y || x>y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        if(x==2 && y==3)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        if(x<=3)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
