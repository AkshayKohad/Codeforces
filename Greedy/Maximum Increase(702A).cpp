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
    
    int count = 1;
    int result = 1;
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
            result = max(result,count);
        }
        
        else{
            count = 1;
        }
    }
    
    cout<<result;
}
