
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    list<int> mylist;
    
    for(int i = 0; i < n;i++) {
        int x; cin>> x;
        mylist.push_back(x);
    }
    for(auto it : mylist) cout << it << " ";
    cout<< endl;
    auto p = find(mylist.begin(), mylist.end(), 100);
    mylist.erase(p);
     auto q = find(mylist.begin(), mylist.end(), 30);
    mylist.erase(q);

    for(auto it : mylist) cout << it << " ";
    cout << endl;
    return 0;
}