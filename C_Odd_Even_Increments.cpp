    #include<bits/stdc++.h>
    
    using namespace std;
    set<int>st1,st2;
     
    int main()
    {
    
        int t,ks=1;
        cin>>t;
        while(t--)
        {
            st1.clear();
            st2.clear();
            int i,n,x;
            

            cin>>n;
            for(int i=1;i<=n;i++)
            {
                cin>>x;
                if(i%2==0)
                    st2.insert(x%2);
                else
                    st1.insert(x%2);
            }
            if(st1.size()==1 && st2.size()==1)
                cout<<"YES";
            else
                cout<<"NO";
        }
     
        return 0;
    }

