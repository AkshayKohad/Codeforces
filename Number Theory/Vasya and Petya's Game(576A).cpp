#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>sieve(n+1,0);
    vector<int>prime_numbers;
    
    
    for(int i=2;i<=n;i++)
    {
        if(sieve[i]==0)
        prime_numbers.push_back(i);
        
        else
        continue;
        
        for(int j=i*i;j<=n;j=j+i)
        {
            sieve[j]=1;
        }
    }
    
    vector<int>result;
    
    for(int i=0;i<prime_numbers.size();i++)
    {
        
        int val = prime_numbers[i];
        
        while(val<=n)
        {
            result.push_back(val);
            val = val*prime_numbers[i];
            
        }
    }
    
    cout<<result.size()<<endl;
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    
}
