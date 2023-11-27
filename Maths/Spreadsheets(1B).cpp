#include <bits/stdc++.h>
using namespace std;




  
// Function to convert a given decimal number
// to a base 'base' and
vector<int> fromDeci(int inputNum, int base)
{
    int index = 0;  // Initialize index of result
  
   vector<int>res;
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res.push_back(inputNum % base);
        int flag=0;
        if(inputNum%base ==0)
        flag=1;
        
        inputNum /= base;
        
        if(flag==1)
        inputNum--;
    }
   
    // Reverse the result
  
//  reverse(res.begin(),res.end());
    return res;
}
 


int main()
{
    
    int n;
    cin>>n;
    
    while(n--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        int i=0;
        
        int cnt = 0;
        vector<int>coordinates;
        while(i<n)
        {
            if(i<n && isdigit(s[i]))
            {
                cnt++;
                string temp;
              while(i<n && isdigit(s[i]))
              {
                temp.push_back(s[i]);
                i++;
                
              }
              
              coordinates.push_back(stoi(temp));
              
            }
            else{
                i++;
            }
        }
        
        string res;
       
        if(cnt==2)
        {
            int row = coordinates[0];
            int col = coordinates[1];
            
           vector<int>ans =  fromDeci(col,26);
           int temp_res = 0;
           int power = 0;
          for(int i=0;i<ans.size();i++)
          {
             // cout<<ans[i]<<endl;
              if(ans[i]!=0)
              {
              res.push_back('A'+ans[i]-1);
               
               temp_res = temp_res + (ans[i])*pow(26,power);
              }
              
              else
              {
              res.push_back('Z');
              temp_res = temp_res + 26*pow(26,power);
              }
              
              if(temp_res==col)
              break;
          }
           reverse(res.begin(),res.end());
           res = res + to_string(row);
            cout<<res<<endl;
        }
        else{
            
            int row = coordinates[0];
            
            string w = to_string(row);
            int sz = w.length();
            
            int num = 0;
            
            int power = n-sz-1;
            
            for(int z=0;z<n-sz;z++)
            {
                int ch = s[z]-'A'+1;
                
                num = num + pow(26,power)*ch;
                power--;
            }
            
            res.push_back('R');
            res = res + w;
            res.push_back('C');
            res = res + to_string(num);
            cout<<res<<endl;
        }
    }
}
