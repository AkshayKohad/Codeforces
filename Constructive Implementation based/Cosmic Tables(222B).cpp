#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n,m,k;
    cin>>n>>m>>k;
    
    int mat[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    vector<int>rows(n);
    
    for(int i=0;i<n;i++)
    rows[i]=i;
    
    vector<int>cols(m);
    
    for(int i=0;i<m;i++)
    cols[i]=i;
    
    while(k--)
    {
        char ch;
        int x,y;
        cin>>ch>>x>>y;
        
        if(ch=='r')
        {
            int temp = rows[x-1];
            rows[x-1] = rows[y-1];
            rows[y-1] = temp;
            
        }
        
        else if(ch=='c')
        {
            int temp = cols[x-1];
            cols[x-1] = cols[y-1];
            cols[y-1] = temp;
        }
        
        else if(ch=='g')
        {
            cout<<mat[rows[x-1]][cols[y-1]]<<endl;
        }
    }
}
