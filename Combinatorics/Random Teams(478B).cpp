#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    ll participants,teams;
    cin>>participants>>teams;
    
    if(teams==1)
    {
        cout<<(participants-teams+1)*(participants-teams)/2<<" "<<(participants-teams+1)*(participants-teams)/2;
        return 0;
    }
    
    ll maxi = (participants-teams+1)*(participants-teams)/2;
    
    ll val = participants/teams;
    
    ll val_mod = participants%teams;
    
    ll ans1 = ((val)*(val-1)/2)*(teams-val_mod);
    ll ans2 = ((val+1)*(val)/2)*(val_mod);
    
    ll mini = ans1+ans2;
    
    cout<<mini<<" "<<maxi;
    
    return 0;
    
    
}
