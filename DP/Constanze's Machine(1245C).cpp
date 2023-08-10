#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007


ll solve(ll i,ll &n,string &s,vector<int>&memo)
{
    if(i==n)
    {
        return 1;
    }
    
    ll res = 0;
    
    if(memo[i]!=-1)
    return memo[i];
    
    
    res = (res + solve(i+1,n,s,memo))%mod;
    if(i+1<n && s[i]==s[i+1] && (s[i]=='n' || s[i]=='u'))
    {
        res = (res + solve(i+2,n,s,memo))%mod;
    }
    
    return memo[i] = res;
}
int main()
{
    string s;
    
    cin>>s;
    
    ll n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='w' || s[i]=='m')
        {
            cout<<"0";
            return 0;
        }
    }
    vector<int>memo(n+1,-1);
    cout<< solve(0,n,s,memo);
}
