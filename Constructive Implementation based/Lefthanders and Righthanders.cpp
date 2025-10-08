#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ifstream cin("input.txt");
	ofstream cout("output.txt");
    int n;
    cin>>n;
    
    vector<int>hand_position(n);
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        if(ch == 'L')hand_position[i] = 0;
        else hand_position[i] = 1;
    }
    
    int index = 1;
    int index2 = n/2+1;
    for(int i=0;i<n/2;i++){
        if(hand_position[index-1] == hand_position[index2-1]){
            cout<<index<<" "<<index2<<endl;
        }else{
            if(hand_position[index-1] == 0){
                cout<<index<<" "<<index2<<endl;
            }else{
                cout<<index2<<" "<<index<<endl;
            }
        }
        
        index++;
        index2++;
    }
}
