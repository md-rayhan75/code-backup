#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n,k;
    if(n==k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            cout<<n/k<<" ";
        }
        cout<<endl;
    }
        else if (n % 2 == 0)
    {
        if ((k - 1) % 2 == 1 && 1 == (n - k - 1) % 2)
        {
            cout << "YES" << endl;
            int cnt = 0;
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
                cnt+= 1;
            }
            cout << n - cnt <<endl;
        }
        else if (k * 2 <= n)
        {
            cout << "YES" << endl;
             int cnt= 0;
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
                cnt += 2;
            }
            cout << n - cnt << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (k % 2 == 1 && k <= n)
        {
            cout << "YES" << endl;
            int cnt = 0;
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
                cnt += 1;
            }
            cout << n - cnt << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
 
int main()
{
int t; cin>>t;
while(t--)
    {
    
        solve();
    }
    return 0;
}
