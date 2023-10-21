#include<bits/stdc++.h>
//#include<string.h>
using namespace std;
class tutorial{
    private:
    string Myname="Rayhan";
    public:
    friend void display (tutorial &displayobj);

};
void display(tutorial &displayobj){
       cout<<"my name is "<<displayobj.Myname;
}
int main(){
    tutorial obj;
    display(obj);
    return 0;

}