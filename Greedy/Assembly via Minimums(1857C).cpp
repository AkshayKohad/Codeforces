Suppose we have an array a that we want to construct, with elements a1,a2,…,an. To simplify the process,
let's assume that the elements of a are sorted in non-decreasing order, meaning a1≤a2≤⋯≤an.
Let's start with a1. Since the elements of a are sorted, the pairs (a1,a2),(a1,a3),…,(a1,an) will have a1
 as the smallest element in each pair. Therefore, the number of occurrences of a1 in array b
 will be n−1.

Moving on to a2, we already know that a1 appears n−1 times in b. Since the elements of a are sorted, all pairs involving a2 
will have a2 as the second smallest element. This means a2 will appear n−2 times in array b.
We continue this process for each element ai in a. The number of occurrences of ai in array b will be n−i.

We can't determine the exact value of an, because it won't be written to array b. Therefore, for an
we can choose any number in the range [an−1;109].

In case there are multiple elements bi in array b that satisfy the condition for a particular ai, we choose the smallest bi.
This greedy approach works, because we are constructing a in non-decreasing order.
The complexity is O(n2logn).


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        ll m = n*(n-1)/2;
        
        
        vector<ll>b(m);
        
       
        
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
           
        }
        
        sort(b.begin(),b.end());
        ll index = 0;
        for(ll i=0;i<n-1;i++)
        {
            
            cout<<b[index]<<" ";
            index = index + n-1-i;
            
        }
        
        cout<<b[m-1];
        cout<<endl;
    }
}
