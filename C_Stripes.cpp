#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,j;
        char arr[8][8];
        int x=0;
        for (i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                cin>>arr[i][j];
            }
        }
        for (i=0; i<8; i++)
        {
            x=0;
            for(j=0; j<8; j++)
            {
                if(arr[i][j]=='R')
                    x++;
            }
            if(x==8)
            {
                cout<<"R\n"<<endl;
                break;
            }
        }
        if(x!=8)
            cout<<"B\n"<<endl;
 
    }
}