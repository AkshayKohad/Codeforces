#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    
    if(s>=2*n)
    {
        cout<<"YES"<<endl;
        
        while(n>1)
        {
            cout<<"2 ";
            s=s-2;
            n--;
        }
        
        cout<<s<<endl;
        
        cout<<"1"<<endl;
    }
    else{
        cout<<"NO";
    }
}
