

    #include<bits/stdc++.h>
    using namespace std;
    void solve()
    {
        long long r,a,q;
        cin>>r>>a>>q;
        string s;
        cin>>s;
        if(r==a)
        {
            cout<<"YES"<<endl;
            return;
        }
        long long c=0,t=a;
        for(long long i=0; i<q; i++)
        {
            if(s[i]=='+')
            {
                a++;
                c++;
            }
            else
            {
                a--;
            }
            if(a==r)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        if(t+c>=r){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    int main()
    {
        long long test;
        cin>>test;
        while(test--)solve();
    }