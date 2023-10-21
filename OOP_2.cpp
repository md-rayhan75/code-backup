//Class Object create
#include<bits/stdc++.h>

using namespace std;

class MyClass { // The class
    public: // Access specifier
      int myNum; // Attribute (int variable)
      string myString; // Attribute (string variable)
};

int main() {
    MyClass Nipa; // Create an object of MyClass
    // Access attributes and set values
    Nipa.myNum = 15;
    Nipa.myString = "Some text";
    // Print attribute values
    cout << Nipa.myNum << endl;
    cout << Nipa.myString;

return 0;
}