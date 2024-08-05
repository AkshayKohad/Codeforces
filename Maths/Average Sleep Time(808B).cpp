#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<double>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    double sum=0;
    double window=0;
    
    for(int i=0;i<k;i++)
    {
        window += a[i];
    }
    
    sum += window;
    
    for(int i=k;i<n;i++)
    {
        window = window-a[i-k];
        window = window+a[i];
        
        sum += window;
    }
    
    double total_weeks = n-k+1;
    double res = sum/total_weeks;
    
    
    cout<<fixed<<setprecision(6)<<res<<"\n";
    
}
