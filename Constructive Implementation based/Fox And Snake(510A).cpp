#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>>matrix(n,vector<char>(m,'.'));
    
    int even_row_count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j] = '#';
            }
        }
        
        else{
            if(even_row_count%2==0)
            {
                matrix[i][m-1] = '#';
                even_row_count++;
            }
            
            else{
                matrix[i][0] = '#';
                even_row_count++;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"";
        }
        
        cout<<endl;
    }
}
