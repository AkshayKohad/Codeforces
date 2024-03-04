#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 ll n,k;
 cin>>n>>k;
 
 vector<ll>two_ones;
 vector<ll>bob_ones;
 vector<ll>alice_ones;
 
 for(ll i=0;i<n;i++)
 {
     ll t,a,b;
     cin>>t>>a>>b;
     
     if(a==1 && b==1)
     {
         two_ones.push_back(t);
     }
     else if(a==1)
     {
         alice_ones.push_back(t);
     }
     else if(b==1)
     {
         bob_ones.push_back(t);
     }
 }
 
 
 ll alice_size = alice_ones.size();
 ll bob_size = bob_ones.size();
 
 ll two_size = two_ones.size();
 
 sort(alice_ones.begin(),alice_ones.end());
 
 sort(bob_ones.begin(),bob_ones.end());
 
 sort(two_ones.begin(),two_ones.end());
 
 
 if(alice_size==0 || bob_size==0)
 {
     if(two_size<k)
     {
         cout<<"-1";
         return 0;
     }
     else{
        ll res = 0;
        ll i=0;
        while(k--)
        {
            res += two_ones[i];
            i++;
        }
        cout<<res;
         return 0;
     }
 }
 
 ll res = 0;
 
 ll two_ones_index = 0;
 ll bob_index = 0;
 ll alice_index = 0;
 
 while(k>0)
 {
    // cout<<k<<endl;
     if(alice_size==0 || bob_size==0)
     {
         if(two_size<k)
         {
             cout<<"-1";
             return 0;
         }
         else{
             res += two_ones[two_ones_index];
             two_ones_index++;
             two_size--;
             k--;
         }
     }
     else if(two_size==0){
                 
          res += bob_ones[bob_index];
          res += alice_ones[alice_index];
          bob_index++;
          alice_index++;
          k--;
          alice_size--;
          bob_size--;
         
     }
     else{
         
         ll ans = two_ones[two_ones_index];
         
         ll ans1 = alice_ones[alice_index] + bob_ones[bob_index];
         
         if(ans <= ans1)
         {
             two_size--;
             two_ones_index++;
             k--;
             res+= ans;
         }
         else{
             bob_size--;
             alice_size--;
             k--;
             alice_index++;
             bob_index++;
             res += ans1;
         }
         
     }
 }
 
 cout<<res;

return 0;
 
}
