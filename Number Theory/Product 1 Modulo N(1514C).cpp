#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    set<int>s;
    
    long long int prod = 1;
    
    for(int i=1;i<n;i++)
    {
        int val = __gcd(i,n);
        
        if(val==1)
        {
            prod = (prod*i)%n;
            s.insert(i);
        }
    }
    
    if(prod!=1)
    {
        s.erase(prod);
    }
    
    cout<<s.size()<<endl;
    
    
    for(auto k:s)
    {
        cout<<k<<" ";
    }
    cout<<endl;
    
    
}
