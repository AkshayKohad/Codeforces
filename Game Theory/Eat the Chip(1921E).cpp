#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll h,w,xa,ya,xb,yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        
        
        ll x_row = xb-xa;
        
        ll y_col = abs(yb-ya);
        
        if(x_row<=0)
        {
            cout<<"Draw"<<endl;
            continue;
        }
        
        ll steps = x_row/2;
        
        
        if(x_row%2==1)
        {
            if(min(w,yb+steps) <= min(w,ya+steps+1ll)  && max(1ll,yb-steps) >= max(1ll,ya-steps-1ll))
            {
                cout<<"Alice"<<endl;
                continue;
            }
        }
        else{
            if(min(w,yb+steps) >= min(w,ya+steps)  && max(1ll,yb-steps) <= max(1ll,ya-steps))
            {
                cout<<"Bob"<<endl;
                continue;
            }
        }
        
        cout<<"Draw"<<endl;
        
    }
}
