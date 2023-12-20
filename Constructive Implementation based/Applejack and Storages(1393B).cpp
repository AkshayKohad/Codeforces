#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        
        mp[val]++;
    }
    
    int sum2 = 0;
    int sum4 = 0;
    
    for(auto k:mp)
    {
        sum4 = sum4 + k.second/4;
        sum2 = sum2 + k.second/2;
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        char ch;
        cin>>ch;
        
        int num;
        cin>>num;
        
        if(ch=='+')
        {
            int val = mp[num];
            mp[num]++;
            sum2 = sum2 - val/2;
            sum2 = sum2 + mp[num]/2;
            sum4 = sum4 - val/4;
            sum4 = sum4 + mp[num]/4;
            
        }
        else{
            int val = mp[num];
            mp[num]--;
            sum2 = sum2 - val/2;
            sum2 = sum2 + mp[num]/2;
            sum4 = sum4 - val/4;
            sum4 = sum4 + mp[num]/4;
        }
        
        
        if(sum4>1)
        {
            cout<<"YES"<<endl;
        }
        else if(sum4>0 && sum2>=2+2*sum4)
        {
            // sum2 >=4 because, if sum4 == 1, that means some of the element have atleast count == 4 and in sum2 -> 4/2 is added in it which we don't want to use as it is already included for square so we need sum2 = 2 + 2*sum4 atleast to pake storage
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
