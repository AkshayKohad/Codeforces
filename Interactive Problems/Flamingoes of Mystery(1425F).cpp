#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int n;
    cin>>n;
    
    
    
    vector<int>prefix_sum(n+1);
    vector<int>a(n+1);
    
    cout<<"? "<<1<<" "<<2<<endl;
    
    int sum;
    
    cin>>sum;
    
    prefix_sum[2] = sum;
    
    int r = 3;
    while(r<=n)
    {
        cout<<"? "<<1<<" "<<r<<endl;
        
        cin>>sum;
        prefix_sum[r] = sum;
        
        a[r] = prefix_sum[r]-prefix_sum[r-1];
        
        r++;
    }
    
    cout<<"? "<<2<<" "<<n<<endl;
    
    int val;
    cin>>val;
    
    a[1] = prefix_sum[n]-val;
    
    a[2] = prefix_sum[2] - a[1];
    
    cout<<"!";
    for(int i=1;i<=n;i++)
    cout<<" "<<a[i];
    
    cout<<endl;
    
    
}
