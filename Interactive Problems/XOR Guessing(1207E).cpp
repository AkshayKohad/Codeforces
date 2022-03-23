#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cout<<"? ";
    
    for(int i=1;i<=100;i++)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    
    int x = 0;
    
    int ans;
    cin>>ans;
    
    
    for(int i=7;i<14;i++)
    {
        if((ans>>i)&1)
        {
            x |= (1<<i);
        }
    }
    
    cout<<"? ";
    for(int i=1;i<=100;i++)
    {
        int cnt = i;
        cnt <<=7;
        cout<<cnt<<" ";
    }
    
    cout<<endl;
    
    cin>>ans;
    
    for(int i=0;i<7;i++)
    {
        if((ans>>i)&1)
        {
            x |= (1<<i);
        }
    }
    
    cout<<"! "<<x<<endl;
	return 0;
}
