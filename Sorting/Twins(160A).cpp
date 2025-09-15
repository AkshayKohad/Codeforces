#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int sum = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    
    sort(a.begin(),a.end());
    
    int mini_coins = 0;
    int amt_received = 0;
    int j = n-1;
    
    while(j>=0 && sum >= amt_received){
        mini_coins++;
        amt_received += a[j];
        sum -= a[j];
        j--;
    }
    cout<<mini_coins<<endl;
    
}
