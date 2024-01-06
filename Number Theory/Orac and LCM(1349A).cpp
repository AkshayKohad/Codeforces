#include <bits/stdc++.h> 
using namespace std;

#define ll long long

vector<bool>prime_sieve(1001,false);
vector<int>prime_numbers;
 
 
int power(int base,int p)
{
    if(p==0)
    return 1;
    
    if(p==1)
    return base;
    
    if(p%2==0)
    {
        int w = power(base,p/2);
        
        return w*w;
    }
    else{
        int w = power(base,(p-1)/2);
        
        return w*w*base;
    }
}
int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
  
     int res=0;
     int res1 = 0;
    for(int i=2;i<=1000;i++)
    {
        res1 = i;
        
        if(prime_sieve[i]==true)
        {
            continue;
        }
        prime_sieve[i]=true;
        prime_numbers.push_back(i);
       
        for(int j=i*i;j<=1000;j=j+i)
        {
            res=j;
            if(prime_sieve[j]==true)
            continue;
            
            prime_sieve[j]=true;
          
             
        }
        
       
    }
    // cout<<" "<<res1<<" "<<res<<endl;
    
    map<int,multiset<int>>mp;
    for(int i=0;i<n;i++)
    {
        int v = a[i];
        for(auto val:prime_numbers)
        {
            int cnt=0;
            
            
            while(v%val==0)
            {
                v = v/val;
                cnt++;
            }
            
            if(cnt!=0)
            mp[val].insert(cnt);
        }
        
        if(v>1)
        mp[v].insert(1);
    }
    
    ll result = 1;
    
    for(auto k:mp)
    {
        
        int base = k.first;
        
        
        if(k.second.size()==n)
        {
            auto it = k.second.begin();
        
            int m = *it;
            
            it++;
        
            m = max(m,*it);
        
        
        
            result = result*power(base,m);
        
        }
        else if(k.second.size()==n-1)
        {
             auto it = k.second.begin();
        
            int m = *it;
            
            result = result*power(base,m);
        }
        
    }
    
    cout<<result<<endl;
}
