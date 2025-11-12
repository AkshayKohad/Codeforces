#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int i = 0;
        priority_queue<int> pq;
        
        while(i < n){
            if(s[i] == '#'){
                i++;
                continue;
            }
            
            int j = i;
            int cnt = 0;
            
            while(j < n && s[j] == '.'){
                j++;
                cnt++;
            }
            i = j;
            pq.push(cnt);
        }
        
        if(pq.size() == 0){
            cout << "0\n";
        } else if(pq.top() >= 3){
            cout << "2\n";
        } else {
            int result = 0;            
            while(!pq.empty()){
                result += pq.top();
                pq.pop();
            }
            cout << result << "\n";
        }
    }
    return 0; 
}
