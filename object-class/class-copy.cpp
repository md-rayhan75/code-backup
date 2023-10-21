#include<bits/stdc++.h>
using namespace std;

class Fruit{
    public:
    string color;
    int price;
    
        Fruit( string color, int price){
            this -> color = color;
            this -> price = price;
        }
        Fruit(){
            color = "none";
            price = 0;
        }
};


int main(){
    Fruit mango("red", 39);
    Fruit apple; 

    apple = mango;

    cout << apple.color << ", " << apple.price << endl;
    return 0;
}