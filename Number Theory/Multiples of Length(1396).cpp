#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1 1"<<endl;
        cout<<"0"<<endl;
        
        cout<<"1 1"<<endl;
        cout<<"0"<<endl;
        
        cout<<"1 1"<<endl;
        cout<<-a[0]<<endl;
    }
    else{
        cout<<"1 1"<<endl;
        cout<<-a[0]<<endl;
        
        cout<<"1 "<<n<<endl;
        cout<<"0 ";
        for(ll i=1;i<n;i++)
        {
            cout<<-n*a[i]<<" ";
        }
        cout<<endl;
        
        cout<<"2 "<<n<<endl;
        
        for(ll i=1;i<n;i++)
        {
            cout<<(n-1)*a[i]<<" ";
        }
        cout<<endl;
    }
    
}
