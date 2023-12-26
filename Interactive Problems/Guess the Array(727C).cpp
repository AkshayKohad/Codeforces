#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    
    vector<int>a(n+1);
    
    cout<<"? "<<1<<" "<<2<<endl;
    
    int sum_12;
    cin>>sum_12;
    
    cout<<"? "<<2<<" "<<3<<endl;
    
    int sum_23;
    cin>>sum_23;
    
    int diff_13 = sum_12-sum_23;
    
    cout<<"? "<<1<<" "<<3<<endl;
    
    int sum_13;
    
    cin>>sum_13;
    
    a[1] = (sum_13 + diff_13)/2;
    
    a[2] = sum_12 - a[1];
    
    a[3] = sum_13 - a[1];
    
    for(int i=4;i<=n;i++)
    {
        cout<<"? "<<1<<" "<<i<<endl;
        
        int sum_1i;
        cin>>sum_1i;
        
        a[i] = sum_1i - a[1];
    }
    
    cout<<"!";
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}
