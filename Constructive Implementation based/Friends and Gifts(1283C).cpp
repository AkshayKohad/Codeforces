#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n+1);
    
    vector<int>gift_given_status(n+1,0);
    vector<int>gift_taken_status(n+1,0);
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
        if(a[i]==0)
        continue;
        
        gift_given_status[i]=1;
        gift_taken_status[a[i]]=1;
    }
    
    
    queue<int>no_gift_got;
    queue<int>no_gift_given;
    vector<int>both_state;
    for(int i=1;i<=n;i++)
    {
        if(gift_taken_status[i]==0 && gift_given_status[i]==0)
        {
         both_state.push_back(i);
         
        }
        
        else if(gift_taken_status[i]==0){
            no_gift_got.push(i);
        }
        else if(gift_given_status[i]==0)
        {
            no_gift_given.push(i);
        }
    }
    
    if(both_state.size()>1)
    {
        for(int i=0;i<both_state.size()-1;i++)
        {
            a[both_state[i]] = both_state[i+1];
        }
        
        a[both_state[both_state.size()-1]] = both_state[0];
    }
    
    else if(both_state.size()==1){
        int val = both_state[0];
        
        a[val] = no_gift_got.front();
        no_gift_got.pop();
        
        a[no_gift_given.front()] = val;
        no_gift_given.pop();
    }
    
    
    while(no_gift_given.empty()==false && no_gift_got.empty()==false)
    {
        int receiver = no_gift_got.front();
        int sender = no_gift_given.front();
        
        
        if(receiver!=sender)
        {
            no_gift_given.pop();
            no_gift_got.pop();
            
            a[sender]=receiver;
        }
        else{
            no_gift_got.pop();
            no_gift_got.push(receiver);
            
        }
        
    }
    
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    
    
}
