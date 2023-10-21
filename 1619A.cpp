    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
     
        while(t--)
        {
            string s,a,b; cin>>s;
     
            for(int i=0;i<s.size()/2;i++) 
            a.push_back(s[i]);
            for(int i=s.size()/2;i<s.size();i++)
            b.push_back(s[i]);
     
            if(s.size()%2==1||a!=b)
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
     
            }
            return 0;
        }