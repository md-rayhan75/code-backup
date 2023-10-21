#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; getline(cin,s);
    map<string, int> mp;
    string x = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            mp[x]++;
            i++;
            x = "";
        } 
        x+= s[i];
    }
    mp[x]++;
    for(auto it: mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}