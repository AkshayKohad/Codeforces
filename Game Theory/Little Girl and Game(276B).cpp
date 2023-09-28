#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(unordered_map<char,int>mp,int n)
{
    int even = 0;
    int odd = 0;
    for(auto k:mp)
    {
        if(k.second%2==0)
        even++;
        
        else
        odd++;
    }
    
    if(n%2==0)
    {
        if(odd==0)
        {
            return true;
        }else{
            return false;
        }
    }
    else{
        if(odd==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    
    return true;
    
}

int main()
{
    string s;
    cin>>s;
    
    unordered_map<char,int>mp;
    
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
 
 bool check_palindrome = is_palindrome(mp,n);  
 
 if(check_palindrome==true)
 {
     cout<<"First";
     return 0;
 }
 
 if(n%2==0)
 {
     cout<<"Second";
 }
 else{
     cout<<"First";
 }
    
}
