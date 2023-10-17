#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{
    int n;
    cin>>n;
    
    vector<pair<ll,ll>>exams;
    
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        exams.push_back({a,b});
    }
    
    sort(exams.begin(),exams.end());
    
    ll cur_day = exams[0].second;
    
    for(int i=1;i<n;i++)
    {
        if(cur_day <= exams[i].second)
        {
            cur_day = exams[i].second;
        }
        else{
            cur_day = max(cur_day,exams[i].first);
        }
    }
    
    
    cout<<cur_day;
    
}
