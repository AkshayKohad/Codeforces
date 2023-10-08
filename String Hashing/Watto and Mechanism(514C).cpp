#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
int main()
{
    int n,m;
    cin>>n>>m;
     ll p=29;
     ll q=31;
     
     set<pair<ll,ll>>distinct_string;
     
    while(n--)
    {
        string s;
        cin>>s;
        ll hash1 = 0;
        ll hash2 = 0;
        ll pow1 = 1;
        ll pow2 = 1;
        for(int i=0;i<s.length();i++)
        {
             hash1 = (hash1 + (s[i]-'a'+1)*pow1)%mod;
             hash2 = (hash2 + (s[i]-'a'+1)*pow2)%mod;
             
             pow1=(p*pow1)%mod;
             pow2=(q*pow2)%mod;
            
        }
        
        ll p1=1;
        ll p2=1;
        
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<3;j++)
            {
                int ch = s[i]-'a';
                
                if(ch!=j)
                {
                    ll h1 = hash1;
                    ll h2 = hash2;
                    
                    h1 = ((h1 - (s[i]-'a'+1)*p1)%mod + mod)%mod;
                    h1 = (h1 + (j+1)*p1)%mod;
                    
                    h2 = ((h2 - (s[i]-'a'+1)*p2)%mod + mod)%mod;
                    h2 = (h2 + (j+1)*p2)%mod;
                    
                   distinct_string.insert({h1,h2});
                    
                    
                }
            }
             p1 = (p1*p)%mod;
             p2 = (p2*q)%mod;
        }
    }
    
    while(m--)
    {
      ll hash1 = 0;
        ll hash2 = 0;
        ll pow1 = 1;
        ll pow2 = 1;
        
        string s;
        cin>>s;
        
        for(int i=0;i<s.length();i++)
        {
             hash1 = (hash1 + (s[i]-'a'+1)*pow1)%mod;
             hash2 = (hash2 + (s[i]-'a'+1)*pow2)%mod;
             
             pow1=(p*pow1)%mod;
             pow2=(q*pow2)%mod;
            
        }
        
        if(distinct_string.find({hash1,hash2})!=distinct_string.end())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}
