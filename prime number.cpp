#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,ctr = 0;
    cin>>num1;
    for(int i=1;i<=num1;i++)
        {
            if(num1%i==0){
                ctr++;
            }
        }
        if(ctr == 2)
        {
            cout<<"prime number";
        }
        else 
        cout<<"not prime number";
        return 0;
}