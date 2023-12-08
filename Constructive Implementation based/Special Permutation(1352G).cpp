#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        int odd;
        
        if(n%2==1)
        {
            odd = n;
        }
        else{
            odd = n-1;
        }
        
        for(int i=odd;i>=1;i=i-2)
        {
            cout<<i<<" ";
        }
        
        cout<<"4 2 ";
        
        for(int i=6;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
}
