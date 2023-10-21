#include <iostream>
#include<string.h>
using namespace std;
class blood_bank
{
public:
    static int bloodgroup[8];
    
};
int blood_bank::bloodgroup[]={0};

class admin
{
    
public:
    
    void display();
    
    admin()
    {
        char s[20] = "Md.Rayhan";
            char str[20];
        cout<<"Enter password:";
        cin>>str;
        if(  strcmp(s,str)==0)
        {
            cout << "welcome!!!" << endl;
            display();
        }
        else
            cout<<"Please contact Rayhan to become an admin"<<endl;
        
    }
};
// A, O+, B+, AB+, A-, O-, B-, AB-

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

class patient
{
    char name[50];
    char blood_group[20];
    
    
public:
    
    int save();
    void show(int);
    
};
// A+, O+, B+, AB+, A-, O-, B-, AB-


class donor
{
    public:
    string name;
    char sex[15];
    
    struct date
    {
        int day;
        int month;
        int year;
    }date;
    
    char blood_group[20];
    //DONOR DETAILS
    int phone_no[15];

    
    int save();
    int display();
    
    int x, c;

    
};

int donor::save()
{
    cout<<"Enter your name:";
    getline(cin, name);
    
    cout<<"Enter your sex:";
    cin >> sex;
    
    cout<<"Enter date(DD MM YY):";
    cin>>date.day;
    cin>>date.month;
    cin>>date.year;
    
    
    // A, O+, B+, AB+, A-, O-, B-, AB-
    
    cout<<"Enter type of blood group you are donating:"<<endl;
    
    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;
    
    cin>>c;
    
    cout<<"how many packets of blood are you donating:";
    cin>>x;
    
    blood_bank::bloodgroup[c]+=x;
    char ch;
    cout<<"Do you want your information to be displayed now(Y/N)";
    cin>>ch;
    
    if(ch=='Y'||ch=='y')
        donor::display();
    
}


int donor::display()
{
    cout<<"name:";
    cout<<name<<endl;
    
    cout<<"Date(DD MM YY):";
    cout<<date.day<<" ";
    cout<<date.month<<" ";
    cout<<date.year<<endl;
    
    cout<<"Blood group:";
    
    switch(c)
    {
            // A, O+, B+, AB+, A-, O-, B-, AB-
        case 0:
            cout<<"0 = A positive"<<endl;
            break;
        case 1:
            cout<<"1 = O positive"<<endl;
            break;
        case 2:
            cout<<"2 = B positive"<<endl;
            break;
        case 3:
            cout<<"3 = AB positive"<<endl;
            break;
        case 4:
            cout<<"4 = A negative"<<endl;
            break;
        case 5:
            cout<<"5 = O negative"<<endl;
            break;
        case 6:
            cout<<"6 = B negative"<<endl;
            break;
        case 7:
            cout<<"7 = AB negative"<<endl;
    }
    
    cout<<"Packets of blood:"<<x<<endl;
    
}

int main()
{
    int i=0,j=0;
    donor a[100];
    patient b[50];
    
    int c=0;
    
    while(c!=4)
    {
        
         cout << "\tBlood Management" << endl << endl << endl;
            cout << "Enter 1 if you are the admin" << endl;
            cout << "2 if you are a donor" << endl;
            cout << "3 if you are a patient" << endl;
            cout << "4 if you want to exit: ";
            cin >> c;

        switch(c)
        {
                
                
            case 4:
                break;
                
            case 1:
            {
                admin t;
                char c;
                break;
            }
                
            case 2:
            {
                int k;
                static int i=0;
                cout<<"welcome donor!!!"<<endl;
                cout<<"Please enter 1 if you want to enter your information:";
                cin >> k;
                cin.ignore();
                if (k == 1)
                    a[i++].save();
                else if (k==2)
                    a[i].display();
                
                break;
            }
                
            case 3:
            {
                static int i=0;
                cout<<"Welcome patient!!!"<<endl;
                
            }
        }
    }
    return 0;
}
