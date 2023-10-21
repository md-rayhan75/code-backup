#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum = 0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n;i++) cin>>v[i];
    for(int i = 0; i < n;i++) {
        if(v[i] < 0) {
            sum = sum + v[i] * -1;
        } else {
            sum = sum + v[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}