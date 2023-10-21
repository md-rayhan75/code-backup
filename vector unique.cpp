#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>vec;
    
    for(int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }

    //sort(vec.begin(),vec.end());
    vector <int> tmp;
    int cur = vec[0];
    tmp.push_back(cur);

    for(int i = 1; i < vec.size(); i++){
        if(vec[i] != cur) {
            tmp.push_back(vec[i]);
            cur = vec[i];
        }
    }

    for(auto it : tmp) cout << it << ' ';
    cout << endl;
    return 0;
}