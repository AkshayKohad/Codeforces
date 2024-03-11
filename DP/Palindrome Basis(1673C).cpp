// In n=40000 number of palindromic numbers are 489 which are very less to apply dp on it

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007


bool ispalindrome(ll n)
{
    ll res = 0;
    ll ans = n;
    while(n!=0)
    {
        ll rem = n%10;
        
        res = res*10 + rem;
        n = n/10;
    }
    
    if(res==ans)
    return true;
    
    return false;
    
}

ll solve(ll n ,ll i,ll &m,vector<ll>&palindrome_numbers,vector<vector<ll>>&memo)
{
    if(n<0)
    return 0;
    
    if(n==0)
    return 1;
    
    if(i==m)
    return 0;
    
    if(memo[n][i]!=-1)
    return memo[n][i];
    
    ll res = solve(n-palindrome_numbers[i],i,m,palindrome_numbers,memo);
    ll res1 = solve(n,i+1,m,palindrome_numbers,memo);
    
    return memo[n][i] = (res+res1)%mod;
    
    
}

int main()
{
   
    vector<ll>palindrome_numbers;
        
        for(ll i=1;i<=40000;i++)
        {
            if(ispalindrome(i))
            palindrome_numbers.push_back(i);
        }
    ll m = palindrome_numbers.size();
    
     vector<vector<ll>>memo(40001,vector<ll>(m,-1));
    // cout<<m<<endl;
    
    ll t;
    cin>>t;
    
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        
        cout<<solve(n,0,m,palindrome_numbers,memo)<<endl;
    }
}
