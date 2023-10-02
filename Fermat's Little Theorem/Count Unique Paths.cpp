Catalina went on an adventure to a mystic city having n rows and n columns. She entered the city from the top-left corner and can leave the city from the bottom-right corner only. There is also a constraint on the movement of Catalina, she can only move down or right from a cell and should remain on or below the principal diagonal. Return the number of possible unique paths that Catalina can take to reach the bottom-right corner.

Since the answer may be large, return it modulo 10^9 + 7

Note : This question has binary marking, i.e. you'll either get full marks if you get all the test cases correct or zero if any of the test case fails.

Input Format

A single integer n

Constraints

1 <= n <= 10^5

Output Format

Print a single value which is the number of possible unique paths modulo 10^9 + 7

Sample Input 0

3
Sample Output 0

2
Explanation 0

Sample test case illustration

Starting from cell (0,0) we can reach cell (2,2) in the following two ways -

DDRR (Orange)
DRDR (Green)
Where D and R represents Down and Right movements respectively




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define mod 1000000007


ll power(ll a, ll p)
{
    if(p==0)
        return 1;
    
    if(p==1)
        return a;
    
    if(p%2==1)
    {
        ll res = power(a,(p-1)/2);
        
        res = (res*res)%mod;
        
        return (res*a)%mod;
    }
    else{
        ll res = power(a,p/2);
        
        return (res*res)%mod;
    }
    
    return 0;
}

ll fact(ll n)
{
    ll ans=1;
    
    for(int i=1;i<=n;i++)
    {
        ans = (ans*i)%mod;
    }
    
    return ans;
}

int main() {
    ll n;
    cin>>n;
    n = n-1;
   ll res = fact(2*n); 
    
   ll res1 = fact(n+1);
   
   ll res2 = fact(n);
    
    res1 = power(res1,mod-2);
    res2 = power(res2,mod-2);    
    
   ll answer = (res*res1)%mod;
    answer = (answer*res2)%mod;
    
    cout<<answer;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
