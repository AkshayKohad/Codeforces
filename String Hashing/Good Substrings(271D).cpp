#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    string seq;
    string char_status;
    
    int k;
    
    cin>>seq>>char_status>>k;
    
    
    
    int n = seq.length();
    
    set<pair<ll,ll>>distinct_good;
    
    for(ll i=0;i<n;i++)
    {
        ll count_bad = 0;
        ll mod = 1000000007;
        ll hash1 = 0;
        ll hash2 = 0;
        ll p1 = 31,p2 = 29;
            
        ll pow1 = 1;
        ll pow2 = 1;
        
        for(int j=i;j<n;j++)
        {
           
            
            
            int ch = seq[j];
            
            if(char_status[ch-'a']=='0')
            {
                if(count_bad < k)
                {
                    
                    count_bad++;
                    
                    hash1 = (hash1 + (ch-'a' + 1)*pow1)%mod;
                    hash2 = (hash2 + (ch -'a' + 1)*pow2)%mod;
                    
                    pow1 = (pow1*p1)%mod;
                    pow2 = (pow2*p2)%mod;
                    
                    distinct_good.insert({hash1,hash2});
                }
                else{
                    break;
                }
            }
            else{
                
                
                
                hash1 = (hash1 + (ch-'a' + 1)*pow1)%mod;
                hash2 = (hash2 + (ch -'a' + 1)*pow2)%mod;
                    
                pow1 = (pow1*p1)%mod;
                pow2 = (pow2*p2)%mod;
                
                distinct_good.insert({hash1,hash2});
            }
        }
    }
    
    cout<<distinct_good.size();
    
}
