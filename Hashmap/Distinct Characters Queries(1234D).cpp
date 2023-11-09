#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector<set<int>>character_record(26);
    
    for(int i=0;i<s.length();i++)
    {
        int ch = s[i]-'a';
        
        character_record[ch].insert(i);
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int choice;
        cin>>choice;
        
        if(choice==1)
        {
            int position;
            cin>>position;
            position--;
            
            char ch;
            cin>>ch;
            
            character_record[s[position]-'a'].erase(position);
            s[position] = ch;
            character_record[ch-'a'].insert(position);
            
            
        }
        else{
            
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            int distinct_character_count = 0;
            
            
            for(int i=0;i<26;i++)
            {
                 auto it = character_record[i].lower_bound(l);
                 
                if(it!=character_record[i].end() && *(it)<= r)
                distinct_character_count++;
            }
            
            cout<<distinct_character_count<<endl;
           
            
            
        }
    }
}
