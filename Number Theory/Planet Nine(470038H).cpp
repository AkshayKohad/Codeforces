#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    
    ll a,b;
    cin>>a>>b;
    
    ll ones = 0;
    string k = "";
    while(1)
    {
        
        ll val = stoll(k+to_string(b));
        
        if(val<a || (val-a)%9 !=0)
        {
         k = k + "1";    
         ones++;        
        continue;
        }
        cout<<"Stable"<<endl;
        
        cout<< (ones>0 ? 1:0) + (val>a ? 1:0) << endl;
        
        if(val > a)
        cout<<"+ "<<(val-a)/9<<endl;
        
        if(ones>0)
        cout<<"- "<<ones<<endl;
        
        return 0;
        
        
    }
}
