#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string location = "/";
    while(n--)
    {
        string command;
        
        cin>>command;
        //cout<<command<<endl;
        
        string operand;
        if(command == "cd")
        {
            cin>>operand;
         //   cout<<operand<<endl;
            
            vector<string>instructions;
            
            int j=0;
            string temp;
            bool start_root = false;
            while(j<operand.length())
            {
                while(j < operand.length() && operand[j]!='/')
                {
                    temp.push_back(operand[j]);
                    j++;
                }
                
                j++;
                
                if(temp.length()>0)
                {
                    instructions.push_back(temp);
                }
                else{
                    start_root = true;
                }
                
                temp = "";
            }
            
            if(start_root == true)
            {
              while(location.length()>1)
              {
                        location.pop_back();
              }
              start_root = false;
            }  
            
            for(int i=0;i<instructions.size();i++)
            {
                if(instructions[i]=="..")
                {
                    while(location.length()>1 && location[location.length()-1]!='/')
                    {
                        location.pop_back();
                    }
                    
                    if(location.length()>1)
                    {
                        location.pop_back();
                    }
                }
                
                else{
                    
                    if(location.length()>1)
                    {
                      location = location + "/" + instructions[i];
                    }
                    else{
                        location = location + instructions[i];
                    }
                }
            }
        }
        
        else if(command == "pwd"){
            if(location.length()==1)
            {
             cout<<location<<endl;
            }            
            else{
                cout<<location + "/"<<endl;
            }
        }
    }
}
