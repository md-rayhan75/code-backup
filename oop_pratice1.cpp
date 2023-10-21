#include<bits/stdc++.h>
using namespace std;

class restrictedData{
    private:
        string user_name;
    public:
        string full_name;
        void setData(string user_name, string full_name ){
            this->user_name = user_name;
            this->full_name = full_name;
        }

        // access private memeber data using this function
        string getData(){
            return user_name;
        }
};

int main(){
    restrictedData one;

    one.setData("aladdin", "Rakibul Islam");

    cout << one.full_name<< ", " << one.getData() << endl;
    return 0;
}
