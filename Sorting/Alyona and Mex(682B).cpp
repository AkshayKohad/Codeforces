#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    int val = 1;
    
    for(int i=0;i<n;i++)
    {
        if(val<a[i])
        {
            a[i] = val;
            val++;
        }
        else if(val==a[i]){
            val++;
        }
        
    }
    
   cout<<val;
}
