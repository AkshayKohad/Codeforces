#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    
    cin>>n>>t;
    
    string s1,s2;
    cin>>s1>>s2;
    
    int same_chars = n-t;
    
    vector<int>cnt_same_ind;
    vector<int>cnt_diff_ind;
    
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        cnt_same_ind.push_back(i);
        
        else
        cnt_diff_ind.push_back(i);
    }
    
   
   
    int cnt = cnt_same_ind.size();
    
    if(cnt==same_chars)
    {
        vector<char>res(n);
        
        for(int i=0;i<cnt_same_ind.size();i++)
        {
            int index = cnt_same_ind[i];
            
            res[index] = s1[index];
        }
        
        for(int i=0;i<cnt_diff_ind.size();i++)
        {
            int index = cnt_diff_ind[i];
            
            char ch1 = s1[index];
            char ch2 = s2[index];
            
            if(ch1 !='a' && ch2!='a')
            {
                res[index] = 'a';
            }
            else if(ch1 !='b' && ch2!='b')
            {
                res[index] = 'b';
            }
            else{
                res[index] = 'c';
            }
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }
    }
    
    else if(cnt > same_chars)
    {
        int diff = cnt-same_chars;
         vector<char>res(n);
        int i=0;
        for( i=0;i<cnt_same_ind.size()-diff;i++)
        {
            int index = cnt_same_ind[i];
            
            res[index] = s1[index];
        }
        for(;i<cnt_same_ind.size();i++)
        {
             int index = cnt_same_ind[i];
            
            char ch1 = s1[index];
            char ch2 = s2[index];
            
            if(ch1 !='a' && ch2!='a')
            {
                res[index] = 'a';
            }
            else if(ch1 !='b' && ch2!='b')
            {
                res[index] = 'b';
            }
            else{
                res[index] = 'c';
            }
        }
        
        i=0;
        for(i=0;i<cnt_diff_ind.size();i++)
        {
            int index = cnt_diff_ind[i];
            
            char ch1 = s1[index];
            char ch2 = s2[index];
            
            if(ch1 !='a' && ch2!='a')
            {
                res[index] = 'a';
            }
            else if(ch1 !='b' && ch2!='b')
            {
                res[index] = 'b';
            }
            else{
                res[index] = 'c';
            }
        }
        i=0;
        for(i=0;i<n;i++)
        {
            cout<<res[i];
        }
    }
    
    else{
        int diff = same_chars-cnt;
        
        int res_diff = n-cnt;
        
        if(res_diff < 2*diff)
        {
            cout<<-1;
        }
        else{
            vector<char>res(n);
        
        for(int i=0;i<cnt_same_ind.size();i++)
        {
            int index = cnt_same_ind[i];
            
            res[index] = s1[index];
        }
        
        int j=0;
        while(j<cnt_diff_ind.size() && diff>0)
        {
          int index = cnt_diff_ind[j];
          
          res[index] = s1[index];
          
          j++;
          
          index = cnt_diff_ind[j];
          
          res[index] = s2[index];
          
          j++;
          
          diff--;
        }
        
        for(;j<cnt_diff_ind.size();j++)
        {
            int index = cnt_diff_ind[j];
            
            char ch1 = s1[index];
            char ch2 = s2[index];
            
            if(ch1 !='a' && ch2!='a')
            {
                res[index] = 'a';
            }
            else if(ch1 !='b' && ch2!='b')
            {
                res[index] = 'b';
            }
            else{
                res[index] = 'c';
            }
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }
        
        
        }
    }
}
