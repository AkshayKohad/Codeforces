#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(string &updated,string &pattern, ll i,ll j,ll &n,ll &m,vector<vector<ll>>&memo)
{
    if(j==m)
    return 1;
    
    if(i==n)
    return 0;
    
    if(memo[i][j]!=-1)
    return memo[i][j];
    
    
    if(updated[i]==pattern[j])
    {
        return memo[i][j] = solve(updated,pattern,i+1,j+1,n,m,memo) + solve(updated,pattern,i+1,j,n,m,memo);
    }
    else{
        return memo[i][j] = solve(updated,pattern,i+1,j,n,m,memo);
    }
}

int main()
{
    string s;
    cin>>s;
    
    ll n = s.length();
    
    string updated;
    
    ll i=0;
    
    while(i<n)
    {
        if(s[i]!='v')
        {
            updated.push_back(s[i]);
            i++;
            continue;
        }
        
        ll j=i;
        ll cnt=0;
        
        while(j<n && s[i]==s[j])
        {
            cnt++;
            j++;
        }
       
        i=j;
        
        if(cnt==1)
        {
            updated.push_back('v');
        }
        else{
            cnt--;
            
            while(cnt--)
            {
                updated.push_back('w');
            }
        }
    }
    
    string pattern = "wow";
    ll updated_len = updated.length();
    ll pat_len = pattern.length();
    
   
   vector<vector<ll>>memo(updated_len+1,vector<ll>(4,-1));
   
    cout<<solve(updated,pattern,0,0,updated_len,pat_len,memo)<<"\n";
}
