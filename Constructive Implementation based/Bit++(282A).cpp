#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
int x = 0;

for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    
    if(s[0]=='X')
    {
        if(s[1]=='+' && s[2]=='+')
        x++;
        
        else if(s[1]=='-' && s[2]=='-')
        x--;
    }
    
    
    else if(s[2]=='X')
    {
       if(s[0]=='+' && s[1]=='+')
        ++x;
        
        else if(s[0]=='-' && s[1]=='-')
        --x;
    }
}    


    
	cout<<x;
	return 0;
}
