#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int a;

public:
    myclass(int x);
    int get();
    myclass(){

    };
    friend void myFrnd(myclass obx);
};

void myFrnd(myclass obx)
{
    cout << obx.a << endl;
}

myclass::myclass(int x)
{
    a = x;
}
int myclass::get()
{
    return a;
}
int main()
{
    myclass ob(67);

    myclass *ob2;
    ob2 = &ob;

    cout << ob.get() << endl;
    cout << ob2->get() << endl;

    myFrnd(*ob2);

    return 0;
}