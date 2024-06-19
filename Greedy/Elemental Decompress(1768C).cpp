#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<int> num1(n, -1);
        vector<int> num2(n, -1);
        
        set<int> s1;
        set<int> s2;
        
        for (int i = 1; i <= n; i++)
        {
            s1.insert(i);
            s2.insert(i);
        }
        
        int flag = 1;
        
        for (int i = 0; i < n; i++)
        {
            if (s1.find(a[i]) != s1.end())
            {
                s1.erase(a[i]);
                num1[i] = a[i];
            }
            else
            {
                if (s2.find(a[i]) == s2.end())
                {
                    cout << "NO\n";
                    flag = 0;
                    break;
                }
                num2[i] = a[i];
                s2.erase(a[i]);
            }
        }
        
        if (!flag)
        {
            continue;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (num1[i] == -1)
            {
                int val;
                
                auto it = s1.lower_bound(num2[i]);
                
                if (it == s1.end() || *it > num2[i])
                {
                    if (it == s1.begin())
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        val = *(--it);
                    }
                }
                else
                {
                    val = *it;
                }
                
                num1[i] = val;
                s1.erase(val);
            }
            else
            {
                int val;
                
                auto it = s2.lower_bound(num1[i]);
                
                if (it == s2.end() || *it > num1[i])
                {
                    if (it == s2.begin())
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        val = *(--it);
                    }
                }
                else
                {
                    val = *it;
                }
                
                num2[i] = val;
                s2.erase(val);
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            
            for (int i = 0; i < n; i++)
            {
                cout << num1[i] << " ";
            }
            cout << "\n";
            
            for (int i = 0; i < n; i++)
            {
                cout << num2[i] << " ";
            }
            cout << "\n";
        }
    }
}
