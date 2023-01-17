#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<char>s;
    
    string name;
    
    cin>>name;
    
    for(int i=0;i<name.length();i++)
    {
        s.insert(name[i]);
    }
    
    int count = s.size();
    
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
    
    return 0;
}
