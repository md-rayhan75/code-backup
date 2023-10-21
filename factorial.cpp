#include<bits/stdc++.h>
using namespace std;
int main(){
    int factorial = 1;
    int num1; cin>>num1;
    for(int i=1; i<num1;i++){
        factorial = factorial * i;

    }
    cout<<factorial;
    return 0;

}