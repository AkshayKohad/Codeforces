#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define boost ios_base :: sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);


bool check(ll pos,ll n,ll a)
{
    ll sum = n*(2*a + 1 - n);
    sum = sum/2;
    
    if(sum>=pos)
    return true;
    
    return false;
}

int main()
{
    boost
    
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        ll n = s.length();
        
        ll pos;
        cin>>pos;
        
        ll l=1;
        ll r=n;
        
        ll ans=-1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            if(check(pos,mid,n))
            {
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            
        }
        
       
        ll prev_term = ans-1;
        
        ll res = prev_term*(2*n + 1 - prev_term);
        
        res = res/2;
        
        
        ll rem = pos-res;
        
        string updated;
        
       
        stack<char>st;
        
        for(ll i=0;i<n;i++)
        {
            while(prev_term>0 && st.empty()==false && st.top()>s[i])
            {
                st.pop();
                prev_term--;
            }
            
            st.push(s[i]);
        }
        
        while(prev_term>0)
        {
            st.pop();
            prev_term--;
        }
        
        while(st.empty()==false)
        {
            updated.push_back(st.top());
            st.pop();
        }
        
        reverse(updated.begin(),updated.end());
     
        cout<<updated[rem-1]<<"";
    }
    
}
