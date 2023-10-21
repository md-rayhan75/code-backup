// 3. Create a class called Person having private data members for the person's
// name and age. Implement a constructor to initialize the person objects, a
// destructor to display a message when an object is destroyed. Define a
// member function to display the person's information outside the class. 

#include<bits/stdc++.h>
using namespace std;
class person
{
private:
    string name;
    int age;
public:
    person() {
        cin >> name;
        cin >> age;
    }
    ~person() {

    }
    void show();
};
void person::show() {
    cout << name << " " << age;
}

int main() {
    person ob;
    ob.show();

    return 0;
}