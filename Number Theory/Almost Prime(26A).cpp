
//1st approach

#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>prime_no;
bitset<3001>b;
void primeSeive()
{
    b.set();
    b[0]=0;
    b[1]=0;
    for(ll i=2;i<=3000;i++)
    {
        if(b[i]==0)
        continue;
        
        prime_no.push_back(i);
        for(ll j=i*i;j<=3000;j=j+i)
        {
            b[j]=0;
        }
        
    }
}

int main()
{
    primeSeive();
    ll n;
    cin>>n;
    ll count =0;
    for(ll i=4;i<=n;i++)
    {
        ll j=0;
        ll c=0;
        while(prime_no[j]<i && j<prime_no.size())
        {
            if(i%prime_no[j]==0)
            c++;
            
            j++;
        }
        
        if(c==2)
        count++;
    }
    cout<<count;
}


// 2nd approach
