#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int res = min(n,m);
    
    cout<<res+1<<endl;
    
    for(int i=0;i<=res;i++)
    {
        cout<<i<<" "<<res-i<<endl;
    }
}
