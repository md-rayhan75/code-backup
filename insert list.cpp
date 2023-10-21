
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
    auto it = mylist.begin();
    it++;
    mylist.insert(it,3);
    for(int it : mylist){
        cout<<it<<" ";
    }
    return 0;
}