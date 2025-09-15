#include <bits/stdc++.h>
using namespace std;

int main(){
    string exp;
    cin>>exp;
    
    if(exp.length()==1){
        cout<<exp;
        return 0;
    }
    
    int cnt_1 = 0;
    int cnt_2 = 0;
    int cnt_3 = 0;
    
    
    for(int i=0;i<exp.length();i+=2){
        if(exp[i]=='1')cnt_1++;
        else if(exp[i]=='2')cnt_2++;
        else cnt_3++;
    }
    int total_cnt = cnt_1 + cnt_2 + cnt_3;
    
    
    while(cnt_1--){
        cout<<"1";
        total_cnt--;
        
        if(total_cnt!=0){
            cout<<"+";
        }
    }
    
     while(cnt_2--){
        cout<<"2";
        total_cnt--;
        
        if(total_cnt!=0){
            cout<<"+";
        }
    }
    
    
     while(cnt_3--){
        cout<<"3";
        total_cnt--;
        
        if(total_cnt!=0){
            cout<<"+";
        }
    }
}
