#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll n;
   cin>>n;
   
   if(n<=3)
   {
    cout<<n;
    return 0;
   }
   
   
   vector<ll>number_primes;
   
   if(n%2==0)
   number_primes.push_back(2);
   
    while (n % 2 == 0) 
    { 
        n = n/2; 
    } 
 
    
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        if(n%i==0)
        {
            number_primes.push_back(i);
        }
        while (n % i == 0) 
        { 
            
            n = n/i; 
        } 
    } 
 
   
    if (n > 2) 
        number_primes.push_back(n);
        
   if(number_primes.size()==0)
   {
       cout<<n<<endl;
   }
   else if(number_primes.size()==1)
   {
       cout<<number_primes[0]<<endl;
   }
   else{
       cout<<"1"<<endl;
   }
   
   
}
