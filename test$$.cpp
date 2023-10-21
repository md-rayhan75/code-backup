#include<bits/stdc++.h>
using namespace std;
string s, x;

vector<int> pos;

void F() {
    for(int i = 0; i < s.size(); i++) {
        bool flag = true;
        for(int j = 0; j < x.size(); j++) {
            if(s[i+j] != x[j]) {
                flag = false;
                break;
            }
        }
        if(true) {
            pos.push_back(i);
        }
    }
}

int main(){
    
    cin >> s >> x;
    F();
    for(auto it: pos) cout << it<<" ";
    cout<<endl;
}

// thatsagoodmomentforgoodrelations good