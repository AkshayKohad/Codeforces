Key Idea:

FastestFinger wins for n=1 , n=2x where (x>1) and n=2⋅p where p is a prime ≥3 else Ashishgup wins.

Solution:

Let's analyse the problem for the following 3 cases:
Case 1: n is odd
Here Ashishgup can divide n by itself, since it is odd and hence nn=1, and FastestFinger loses. Here n=1 is an exception.

Case 2: n is even and has no odd divisors greater than 1 Here n is of the form 2x. 
As n has no odd divisors greater than 1, Ashishgup is forced to subtract it by 1 making n odd.
So if x>1, FastestFinger wins. For x=1, n−1 is equal to 1, so Ashishgup wins.

Case 3: n is even and has odd divisors
If n is divisible by 4 then Ashishgup can divide n by its largest odd factor after which n becomes of the form 2x where x>1, so Ashishgup wins.
Otherwise n must be of the form 2⋅p, where p is odd. If p is prime, Ashishgup loses since he can either reduce n
by 1 or divide it by p both of which would be losing for him. If p is not prime then p must be of the form p1⋅p2 where p1 is prime and p2 is any odd number >1.
Ashishgup can win by dividing n by p2.



#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool power_of_2(ll n)
{
    while(n>1)
    {
        if(n%2!=0)
        return false;
        
        n=n/2;
    }
    return true;
}

bool isPrime(ll val)
{
    if(val<=1)
    return false;
    
    if(val<=3)
    return true;
    
    if(val%2==0 || val%3==0)
    return false;
    
    for(ll i=5;i*i<=val;i=i+6)
    {
         if (val % i == 0 || val % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
            
        }
       else if(n==2)
        {
            cout<<"Ashishgup"<<endl;
           
        }
        else if(n%2==1)
        {
             cout<<"Ashishgup"<<endl;
           
        }
        else
        {
            
            if(power_of_2(n))
            {
                cout<<"FastestFinger"<<endl;
            }
            else{
            ll res = n/2;
            
            if(isPrime(res))
            {
                cout<<"FastestFinger"<<endl;
            }
            else{
                 cout<<"Ashishgup"<<endl;
            
            }
            }
        }
    }
}
