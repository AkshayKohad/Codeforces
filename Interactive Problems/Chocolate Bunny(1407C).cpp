#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    
    int i=1;
    int j=2;
    
    vector<int>res(n+1,-1);
    
    while(j<=n)
    {
        cout<<"? "<<i<<" "<<j<<endl;
        
        int val;
        cin>>val;
        
        cout<<"? "<<j<<" "<<i<<endl;
        
        int val1;
        cin>>val1;
        
        if(val1>val)
        {
            res[j] = val1;
            j=j+1;
        }
        else{
            res[i] = val;
            i=j;
            j=j+1;
        }
        
        
    }
    
    set<int>st;
    
    for(int i=1;i<=n;i++)
    {
        if(res[i]==-1)continue;
        
        st.insert(res[i]);
    }
    
    int missing_num = -1;
    
    for(int i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            missing_num = i;
            break;
        }
    }
    
    cout<<"!";
    for(int i=1;i<=n;i++)
    {
        if(res[i]==-1)
        res[i] = missing_num;
        
        cout<<" "<<res[i];
    }
    
}
