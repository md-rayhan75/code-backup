#include<bits/stdc++.h>
using namespace std;
class cse36 {
public:
    string namee;
    int id;
    int sec;
    int intake;
 
    void getDAta(string namee, int id, int sec) {
        this->namee = namee;
        this->id = id;
        this->sec = sec;
    }

    cse36() {
        intake = 36;
    }
};
int main() {
    cse36 ob[5];

    for (int i = 0; i < 1; i++) {
        string name;
        int id, sec;
        cout << "Enter " << i + 1 << " person inforamtiono: \n";
        cout << "Name : ";
        
        getline(cin, name);
        cout << " id: ";
        cin >> id;
        cout << "sec: ";
        cin >> sec;
        cin.ignore();
        ob[i].getDAta(name, id, sec);

    }

    for (int i = 0; i < 1; i++) {
        cout << "Name: " << ob[i].namee << endl << " intake: " <<ob[i].intake << endl;
    }
    return 0;
}