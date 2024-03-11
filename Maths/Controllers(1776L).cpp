#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    string s;
    cin>>s;
    
    ll cnt_plus = 0;
    ll cnt_minus = 0;
    
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='+')
        cnt_plus++;
        
        else
        cnt_minus++;
    }
    
    // x+y = cnt_plus;
    
    // z+w = cnt_minus;
    
    ll q;
    cin>>q;
    
    
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        
        ll ans_min = min(a,b);
        ll ans_max = max(a,b);
        
        // x*ans_max + y*ans_min -z*ans_max -w*ans_min = 0;
        // x*(ans_max-ans_min) + cnt_plus*ans_min = z*(ans_max-ans_min) + cnt_minus*ans_min
        
        ll res_val = (cnt_minus-cnt_plus)*ans_min;
        ll diff = ans_max-ans_min;
        
        if(diff==0)
        {
            if(res_val==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        
        if(res_val > 0)
        {
            if(res_val%diff!=0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else{
                ll res_ans = res_val/diff;
                
                if(res_ans<=cnt_plus)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                    continue;
                }
                
            }
        }
        else{
            res_val = res_val*(-1); 
            
            if(res_val%diff!=0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else{
                ll res_ans = res_val/diff;
                
                if(res_ans<=cnt_minus)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                    continue;
                }
                
            }
        }
    }
}
