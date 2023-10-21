#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    char name;
    char address;
    void Read(int x,char a,char b){
        id = x;
        name = a;
        address = b;
    }
    void display(){
        cout << id << ' ' << name << " " << address << endl;
    }
};

int main(){
    student ob[5];
    for(int i = 0; i < 5; i++){
        int x;  char a, b;
        cin >> x >> a >> b;
        ob[i].Read(x, a, b);
    }
    for(int i = 0; i < 5; i++){
        ob[i].display();
    }
    return 0;
}