#include<bits/stdc++.h>
using namespace std;
class blood_bank
{
public:
    static int bloodgroup[8];
    
};
int blood_bank::bloodgroup[]={0,0,2,3,0,0,5,0};

class admin
{
    
public:
    
    void display();
    
    admin()
    {
        string s="Md.Rayhan";
        string str;
        cout<<"Enter password:";
        cin>>str;
        if(s==str)
        {cout<<"welcome!!!"<<endl;
            display();}
        else
            cout<<"Please contact Rayhan to become an admin"<<endl;
        
    }
};
 //A, O+, B+, AB+, A-, O-, B-, AB-

void admin::display()
{
    cout<<"A +ve:"<<blood_bank::bloodgroup[0]<<endl;
    cout<<"O +ve:"<<blood_bank::bloodgroup[1]<<endl;
    cout<<"B +ve:"<<blood_bank::bloodgroup[2]<<endl;
    cout<<"AB +ve:"<<blood_bank::bloodgroup[3]<<endl;
    
    cout<<"A -ve:"<<blood_bank::bloodgroup[4]<<endl;
    cout<<"O -ve:"<<blood_bank::bloodgroup[5]<<endl;
    cout<<"B -ve:"<<blood_bank::bloodgroup[6]<<endl;
    cout<<"AB -ve:"<<blood_bank::bloodgroup[7]<<endl;
}


int main()
{
    int c=0;
    
    while(c!=4)
    {
        
        cout<<"\t"<<"Blood Management"<<endl;
        cout<<endl;
        cout<<endl;
        
        cout<<"Enter 1 if you are the admin"<<endl;
        cout<<"2 if you are a donor "<<endl;
        cout<<"3 if you are a patient"<<endl; 
        cout<<"4 if you want to exit:";
        cin>>c;
    
        switch (c)
            {
                case 1:
            {
                admin t;
                char c;
                break;
            }
    
    //default:
       // break;
            }
    }
    return 0;
}
