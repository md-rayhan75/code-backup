#include<bits/stdc++.h>
using namespace std;
class tutorial{
    private:
    string myname="Md.Rayhan";
    public:
    friend int display (tutorial displayobj);

};
int display (tutorial displayobj){
    
    cout<<"my name is"<<displayobj.myname;
}
int main()
{
    tutorial obj;
    display(obj);
    return 0;
}