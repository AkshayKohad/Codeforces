#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    ll k;
    cin>>k;
    
    while(k>0)
    {
        int remain = n%10;
        
        if(remain == 0)
        {
            n/=10;
            
            k--;
        }
        
        else{
            
            if(remain<=k)
            {
                k = k-remain;
                
                n = n-remain;
                
            }
            
            else{
                n = n-k;
                
                k = 0;
            
            }
            
        }
        
    }
    
    cout<<n<<endl;
    
    return 0;
}
