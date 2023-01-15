#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        
        a.push_back(val);
    }
    
    
    int min_index = -1;
    int max_index = -1;
    
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(min_val>=a[i])
        {
            min_index = i;
            min_val = a[i];
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(max_val<=a[i])
        {
            max_index = i;
            max_val = a[i];
        }
    }
    
    
    if(a[min_index] == a[max_index])
    {
        cout<<"0"<<endl;
    }
    
    else{
        if(min_index<max_index)
        {
            cout<<max_index + (n-1-min_index) -1 <<endl;
        }
        
        else
        {
            cout<< max_index + (n-1-min_index) <<endl;
        }
    }
    
    return 0;
}
