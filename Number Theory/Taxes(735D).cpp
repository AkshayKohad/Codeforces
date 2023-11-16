//The first obvious fact is that the answer for prime numbers is 1. If the number is not prime, then the answer is at least 2.
//When is it possible? It is possible in 2 cases; when it is sum of 2 primes of its maximal divisor is 2. If 2 divides n, then so does integer n/2. 
//n/2<=2=>n<=4=>n=4, where n is prime. According to Goldbach's conjecture, which is checked for all numbers no more than 10^9, every number is a sum of two prime numbers.
//Odd number can be sum of two primes, if (n-2) is prime (the only even prime number is 2). Otherwise, the answer is 3 — n=3+(n-3), (n-3) is sum of 2 primes, 
//because it is even.


#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll n)
{
    if(n<=1)return false;
    
    if(n<=3) return true;
    
    if(n%2==0 || n%3==0) return false;
    
    for(ll i=5;i*i<=n;i=i+6)
    {
        if((n%i==0) || (n%(i+2)==0))
        return false;
    }
    
    return true;
}

int main()
{
  ll n;
  cin>>n;
  
  if(isPrime(n))
  cout<<"1";
  
  else if(n%2==0)
  {
      cout<<"2";
  }
  else if(isPrime(n-2))
  {
      cout<<"2";
  }
  else{
      cout<<"3";
  }
  
}
