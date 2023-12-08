If n<4 then there is no answer. You can do some handwork to be sure. Otherwise, the answer exists and there is one simple way to construct it: 
firstly, let's put all odd integers into the answer in decreasing order, then put 4, 2, and all other even numbers in increasing order.
To test that it always works, you can run some kind of checker locally (you can check all 1000 tests very fast, in less than one second, this may be very helpful sometimes).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        int odd;
        
        if(n%2==1)
        {
            odd = n;
        }
        else{
            odd = n-1;
        }
        
        for(int i=odd;i>=1;i=i-2)
        {
            cout<<i<<" ";
        }
        
        cout<<"4 2 ";
        
        for(int i=6;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
}
