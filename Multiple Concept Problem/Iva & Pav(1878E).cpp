// This Problem is combination of Bitmasking + Prefix_sum + Binary_Search
// We can, for each bit, calculate the prefix sums of the array (pref[i][j] is the number of occurrences of the 
// j-th bit in the first i elements of the array. This can be calculated in O(nlog(max(a))).
// We know that if pref[r][j]−pref[l−1][j]=0, then the j-th bit is present in all elements of the subsegment [l,r] of the 
// array a, which means the value of f(l,r) is equal to the sum of all bits for which this condition is true 
// on the subsegment from l to r, and we can calculate that in O(log(max(a))).

// (Here we are calculation pref for calculating number of unset bit pref[r][j] -> it give sum of unset bit from index 0 to r
// at jth bit of every number.  So if pref[r][j]−pref[l−1][j]=0 that means each element from (l,r) has set bit at jth bit.)

// Next, for each query, we can use binary search to find r, by calculating f(l,mid). If f(l,r)≥k,then we found 
// an index for which the condition is true, so we move the left to mid+1, else we move the right to mid−1. 
// This solution works in O(Q⋅log(N)⋅log(max(a))) which is around 4*10^7 operations, with a low constant factor.

#include <bits/stdc++.h>
using namespace std;

 #define ll long long
 
 bool check(ll mid,ll &l,vector<vector<ll>>&prefix,ll &k)
 {
     ll res = 0;
     
     for(ll i=31;i>=0;i--)
     {
         //cout<<res<<endl;
         
         ll val = 0;
         if(l==0)
         {
            val = prefix[mid][i];
            
         }
         else{
             val = prefix[mid][i]-prefix[l-1][i];
            
         }
         
         //cout<<"("<<val<<")"<<endl;
         
         if(val==0)
         {
             res += pow(2,i);
             
             if(res>=k)return true;
         }
     }
     
     
     if(res<k) return false;
 }
 
 int main()
 {
     ll t;
     cin>>t;
     
     while(t--)
     {
         ll n;
         cin>>n;
         
         vector<ll>a(n);
         
         vector<vector<ll>>prefix(n,vector<ll>(32,0));
         
         
         for(ll i=0;i<n;i++)
         {
             cin>>a[i];
             
             for(ll j=31;j>=0;j--)
             {
                 ll bit = (a[i]>>j)&1;
                
                 if(bit==0)
                 {
                     if(i==0)
                     prefix[i][j] += 1;
                     
                     else
                     prefix[i][j] = prefix[i-1][j] + 1;
                 }
                 else{
                     if(i==0)
                     prefix[i][j] = 0;
                     
                     else
                     prefix[i][j] = prefix[i-1][j];
                 }
             }
             
         }
         
         ll q;
         cin>>q;
         
         while(q--)
         {
             ll l,k;
             cin>>l>>k;
             
             ll low = l-1;
             ll high = n-1;
             ll ans = -1;
             l--;
            // cout<<k<<endl;
             while(low<=high)
             {
                 
                 
                 ll mid = (low+high)/2;
                 
                //  cout<<low<<" "<<high<<" "<<mid<<endl;
                 
                 if(check(mid,l,prefix,k))
                 {
                    // cout<<"hello"<<endl;
                     ans = mid;
                     low = mid+1;
                 }
                 else{
                     high = mid-1;
                 }
             }
             
             if(ans==-1)
             cout<<"-1 ";
             
             else
             cout<<ans+1<<" ";
         }
         
         cout<<endl;
     }
 }
