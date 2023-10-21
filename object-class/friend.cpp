#include <bits/stdc++.h>
using namespace std;

class tutorial
{
private:
    string myName = "aladdin";

public:
    friend void display(tutorial disObj);
};

void display(tutorial disObj)
{
    cout << "My name is: " << disObj.myName << endl;
}
int main()
{

    tutorial obx;
    display(obx);
    return 0;
}
