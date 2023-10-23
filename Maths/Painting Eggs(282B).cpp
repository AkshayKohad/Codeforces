#include <bits/stdc++.h>
using namespace std;

int main()
{
     
    int n;
    cin>>n;
    
    string result = "";
    int total = 0;
    
     int a[n];
     int b[n];
     
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    
    for(int i=0;i<n;i++)
    {
        
        if(total+a[i]<=500)
        {
            total+=a[i];
            result+="A";
        }
        else{
            total-=b[i];
            result +="G";
        }
    }
    cout<<result;
}
