#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double x,y;
    cin>>n>>x>>y;
    
    unordered_set<double>result;
    
    int flag_infinite = 0;
    for(int i=0;i<n;i++)
    {
        double xi,yi;
        
        cin>>xi>>yi;
        
        double num = xi-x;
        double deno = yi-y;
        
        if(deno==0)
        {
            flag_infinite = 1;
        }
        else{
            double res = num/deno;
           // cout<<res<<endl;
            result.insert(res);
        }
    }
    
    cout<<result.size()+flag_infinite;
    
    
    
}
