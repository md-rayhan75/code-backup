#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

    string s;
    cin>>s;
   ll cnt=0;
    ll sum=0;
    ll c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;

   ll len =0;

    for(ll i=0;s[i]!='\0' ; i++)
    {

        if(s[i]=='W' || s[i]=='w')
        {
            cnt++;
        }
         else if(s[i]=='0')
        {
            c0+=0;
        }
        else if(s[i]=='1')
        {
            c1+=1;
        }
        else if(s[i]=='2')
        {
            c2+=2;
        }
        else if(s[i]=='3')
        {
            c3+=3;
        }
        else if(s[i]=='4')
        {
            c4+=4;
        }
        else if(s[i]=='5')
        {
            c5+=5;
        }
        else if(s[i]=='6')
        {
            c6+=6;
        }


        len++;
    }

    sum = c0+c1+c2+c3+c4+c5+c6;
    float a=0.0;

 int llll= len%6;
float l = len/6;

float marge=0.0;

marge = float(llll)/10;
a=l+marge;

    if( a <=1.0){
            printf("%0.1f Over ",a);
    }
    if(a >1.0){
            printf("%0.1f Overs ",a);
    }
    if(sum <=1){
    cout<<sum<<" Run ";
    }
    if(sum >1){
    cout<<sum<<" Runs ";
    }
    if(cnt<=1){
    cout<<cnt<<" Wicket."<<endl;
    }
    if(cnt>1){
    cout<<cnt<<" Wickets."<<endl;
    }
};

int main()
{
    int test ;
    cin>>test;
    while(test--)
    {
        solve();
    }

    return 0;
}