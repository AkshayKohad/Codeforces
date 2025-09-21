#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string res;
    string temp;
    
    int n = s.length();
    
    for(int i=0;i<n;){
        if(i>n-3){
            temp.push_back(s[i]);
            i++;
            continue;
        }
      
        if(s.substr(i,3) == "WUB"){
            i = i+3;
            if(temp.length()>0){
                if(res.length()>0){
                    res.push_back(' ');
                    res  = res + temp;
                }else{
                    res = temp;
                }      
                temp = "";
            }
        }else{
            temp.push_back(s[i]);
            i++;
        }   
    }
    if(temp.length()>0){
        if(res.length()>0){
            res.push_back(' ');
            res  = res + temp;
        }else{
            res = temp;
        }
    }
    cout<<res<<endl;   
}
