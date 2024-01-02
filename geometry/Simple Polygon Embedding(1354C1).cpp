#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.1415926535897;
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        
        cin>>n;
        
        double theta = pi/(2.0*n);
        
        double ans = (1.0/tan(theta));
        
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
}
