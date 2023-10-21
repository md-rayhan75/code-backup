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
    int mx = 0;
    string key;
    for(auto it: mp) {
        if(it.second > mx) {
            mx = it.second;
            key = it.first;
        }
    }
    cout<<key <<" "<< mp[key]<<endl;
    return 0;
}