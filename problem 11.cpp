#include<bits/stdc++.h>
using namespace std;

class Registration {
public:
    void chooseCourse(string a, string b, string c) {
        cout << "Registred Courses are: ";
        cout << a << " " << b << " " << c << endl;
    }
    void chooseCourse(string a, string b, string c, string d) {
        cout << "Registred Courses are: ";
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    void chooseCourse(string a, string b, string c, string d, string e) {
        cout << "Registred Courses are: ";
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    void chooseCourse(string a, string b, string c, string d, string e, string f) {
        cout << "Registred Courses are: ";
        cout << a << " " << b << " " << c << " " << d << endl;
    }

};

int main() {
    Registration obj;
    obj.chooseCourse("Bangla", "Engilsh", "Math");

    obj.chooseCourse("Bangla", "Engilsh", "Math", "Physics");
    


    return 0;
}