    #include<bits/stdc++.h>
    using namespace std;
    int main()
          {
            int  test; cin>>test;
             while(test--)
              {
                int n; cin>>n;
                string s1; cin>>s1;
                sort(s1.begin(),s1.end());
                int a=s1[s1.size()-1];
                cout<<a-96<<endl;
     
                }
            return 0;
            }
     