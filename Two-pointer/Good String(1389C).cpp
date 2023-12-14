Approach
Now, since there are only 10 different types of characters, we can brute force all possible combinations of the first and the second character of the string
we want to obtain (there are only 100 of them) and, for each combination, greedily construct the longest possible subsequence of s beginning with those characters in O(n).


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        
        vector<int>freq(10,0);
        
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'0']++;
        }
        
      
        int result = n+1;
        
        for(int i=0;i<10;i++)
        {
            result = min(result,n-freq[i]);
        }
        
        for(int i=0;i<=9;i++)
        {
            for(int j=0;j<=9;j++)
            {
                if(i==j)
                continue;
                
                char w = i+'0';
                char x = j+'0';
                
                int cnt = 0;
                
                int k=0;
               while(k<n)
                {
                    if(s[k]==w)
                    {
                      k++;
                      while(k<n && s[k]!=x)    
                      k++;
                      
                      if(k<n && s[k]==x)
                      {
                          cnt=cnt+2;
                          k++;
                      }
                    
                    }
                    else{
                        k++;
                    }
                }
                
                result = min(result,n-cnt);
            }
        }
        
        cout<<result<<endl;
    }
}
