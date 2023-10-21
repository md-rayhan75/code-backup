#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    int ctr=0;
    int fnd=0;
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++)
    {
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0)
                ctr++;
            
        }
        if(ctr==0&&i!=1){
        fnd++;
        cout<<i<<endl;
        }
        ctr=0;

    }
    cout<<fnd;
    return 0;

}