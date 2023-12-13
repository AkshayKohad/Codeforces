#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 ll t;
 cin>>t;
 
 while(t--)
 {
     ll n,s;
     cin>>n>>s;
     
     vector<ll>a;
     
     ll sum = 0;
     while(n!=0)
     {
         sum += n%10;
         a.push_back(n%10);
         n=n/10;
     }
     
     if(sum<=s)
     {
         cout<<0<<endl;
         continue;
     }
     
     ll result = 0;
     
     ll i=0;
     ll m = a.size();
     ll base = 1;
     ll carry = 0;
     while(sum>s && i<m)
     {
         ll val = a[i];
         sum = sum - (val+carry);
         result += (10-val-carry)*base;
         carry = 1;
         sum +=carry;
         
         
         
        //  result += (10-val-carry)*base;
         base = base*10;
         i++;
         
     }
     
     cout<<result<<endl;
 }
}
