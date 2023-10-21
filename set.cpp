#include<bits/stdc++.h>
using namespace std;

void donor();
void patient();
void admin();
void exit();

class doner_c
{
    
public:
    
    string name;
    string sex;
    int age;
    int packet;
    string blood_group;
    int day, month, year;
    
};

int main() {

     int choice;
    cout << " \t\t Blood Bank Management System \n";
    //cout << "  \t\t-------------------------\n";
    cout << "  \t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
    cout << " |-------------------------------------------|\n";
    cout << " | Enter 1 for donor                         |\n";
    cout << " | Enter 2 for patient                       |\n";
    cout << " | Enter 3 for admin                         |\n";
    cout << " | Enter 4 for exit                          |\n";
    cout << " |-------------------------------------------|\n";
    cout << "\n\n";
    cout << " |----------------------------------|\n";
    //cout << " |                                 |\n";
    cout << " |       Enter your choice:         |\n";
    //cout << " |                                 |\n";
    cout << " |----------------------------------|\n";
     cin >> choice;

    // int choice;
    // cin >> choice;

    switch (choice)
    {
    case 1:
        donor();
        break;
    case 2:
        patient();
        break;
    case 3:
        admin();
        break;
    case 4:
        exit();
        break;

    default:
        cout << "Enter value of 1-4\n";
        main();
    }
    return 0;

}

void donor() {
    doner_c person;
    string name;
    string sex;
    int age;
    string blood;
    int  date, day, month, year;
    int last_day, last_month, last_year;

    cout << "Enter your name: " << endl;
    cin.ignore();
    getline(cin, name);
    person.name = name;
    
    cout << "Enter your sex: " << endl;
    cin >> sex;
    person.sex = sex;
    
    cout << "Enter you age: " << endl;
    cin >> age;
    person.age = age;
    
    cout << "Today's date(DD MM YYYY):";
    cin >> day;
    person.day = day;

    cin >> month;
    person.month = month;
    cin >> year;
    person.year = year;
    cout << "Have your ever given blood before (Y/N):";
    char a;
    cin >> a;
    if (a == 'y' || a == 'Y')
    {
        cout << "Previous donate date(DD MM YYYY):";
        cin >> last_day;
        cin >> last_month;
        cin >> last_year;


        int sum = month - last_month;
        if (((day == last_day || day != last_day) && sum > 3 && year == last_year) || ((day == last_day || day != last_day) && month <= last_month && year > last_year))
        {
            int update_date = 0;
            int update_month = 0;
            int update_year = 0;
            update_date = day;
            update_month = (month + 3);
            update_year = year;
            if (update_month > 12)
            {
                update_month = (update_month - 12);
                update_year++;

            }



            cout << "Blood Group ( Capital letter ): ";
            cin >> blood;
            person.blood_group = blood;



            // file write1
            ofstream myFile("info.txt", ios::app);
            myFile << person.name << " " << person.sex << " " << person.age << " " << person.blood_group << endl;


            ofstream bloodFile("blood.txt", ios::app);

            if (blood == "O+")
            {
                bloodFile << 'a';
            }
            else if (blood == "A+")
            {
                bloodFile << 'b';
            }
            else if (blood == "B+")
            {
                bloodFile << 'c';
            }
            else if (blood == "AB+")
            {
                bloodFile << 'd';
            }
            else if (blood == "O-")
            {
                bloodFile << 'e';
            }
            else if (blood == "A-")
            {
                bloodFile << 'f';
            }
            else if (blood == "B-")
            {
                bloodFile << 'g';
            }
            else if (blood == "AB-")
            {
                bloodFile << 'h';
            }

            bloodFile.close();
            myFile.close();
            char c;
            cout << "Do you want your information to be displayed now(Y/N):";

            cin >> c;
            if (c == 'Y' || c == 'y') {
                cout << "\t\t\t Donation slip";
                cout << endl;
                cout << "\t\t\t~~~~~~~~~~~~~~~";
                cout << endl;
                cout << "Name :" << name;
                cout << endl;
                cout << "Sex  :" << sex;
                cout << endl;
                cout << "Age  :" << age;
                cout << endl;
                cout << "Group:" << blood;
                cout << endl;

                
                cout << endl << endl;
                cout << "You can donate blood after 3 months\n";
                cout << update_date << " " << update_month << " " << update_year << endl;



                
                cout << endl << endl << "Thanks for donating blood\n";
                cout << endl << endl;
                cout << "\t\t\t\t\t\t Md.Rayhan\n";
                cout << "\t\t\t\t\t\t------------\n";
                cout << "\t\t\t\t\t\t signature\n";
                cout << endl << endl;



                main();
            }
            else
                cout << endl << endl << "Thanks for donating blood" << endl;

        }
         else
        cout << "Sorry! You can't donate blood:";
    cout << endl;
    cout << endl;

        main();
    }

    else

        cout << "Blood Group ( Capital letter ): ";
            cin >> blood;
            person.blood_group = blood;



            // file write1
            ofstream myFile("info.txt", ios::app);
            myFile << person.name << " " << person.sex << " " << person.age << " " << person.blood_group << endl;


            ofstream bloodFile("blood.txt", ios::app);

            if (blood == "O+")
            {
                bloodFile << 'a';
            }
            else if (blood == "A+")
            {
                bloodFile << 'b';
            }
            else if (blood == "B+")
            {
                bloodFile << 'c';
            }
            else if (blood == "AB+")
            {
                bloodFile << 'd';
            }
            else if (blood == "O-")
            {
                bloodFile << 'e';
            }
            else if (blood == "A-")
            {
                bloodFile << 'f';
            }
            else if (blood == "B-")
            {
                bloodFile << 'g';
            }
            else if (blood == "AB-")
            {
                bloodFile << 'h';
            }

            bloodFile.close();
            myFile.close();
            char c;
            cout << "Do you want your information to be displayed now(Y/N):";

            cin >> c;
            int update_date = 0;
            int update_month = 0;
            int update_year = 0;
            update_date = day;
            update_month = (month + 3);
            update_year = year;
            if (update_month > 12)
            {
                update_month = (update_month - 12);
                update_year++;

            }
            if (c == 'Y' || c == 'y') {
                cout << "\t\t\t Donation slip";
                cout << endl;
                cout << "\t\t\t~~~~~~~~~~~~~~~";
                cout << endl;
                cout << "Name :" << name;
                cout << endl;
                cout << "Sex  :" << sex;
                cout << endl;
                cout << "Age  :" << age;
                cout << endl;
                cout << "Group:" << blood;
                cout << endl;

        
                cout << endl << endl;
                cout << "You can donate blood after 3 months\n";
                cout << update_date << " " << update_month << " " << update_year << endl;



            
                cout << endl << endl << "Thanks for donating blood\n";
                cout << endl << endl;
                cout << "\t\t\t\t\t\t Md.Rayhan\n";
                cout << "\t\t\t\t\t\t------------\n";
                cout << "\t\t\t\t\t\t signature\n";
                cout << endl << endl;



                main();
            }
            else {
                cout << endl << endl << "Thanks for donating blood" << endl;

            }

        

        //else if()
       

}


void patient() {
    // File Read
    string blood_name;
    ifstream bloodFile("blood.txt");
    bloodFile >> blood_name;

    multiset<char> ms;
    for (char x : blood_name)
    {
        ms.insert(x);
    }
    cout << "Which blood group you need( Capital letter ): ";
    string b_n;
    cin >> b_n;
    char ch;
    string name, sex, age;

    
    if (b_n == "O+")
    {
        ch = 'a';
    }
    else if (b_n == "A+")
    {
        ch = 'b';
    }
    else if (b_n == "B+")
    {
        ch = 'c';
    }
    else if (b_n == "AB+")
    {
        ch = 'd';
    }
    else if (b_n == "O-")

        ch = 'e';

    else if (b_n == "A-")
    {
        ch = 'f';
    }
    else if (b_n == "B-")
    {
        ch = 'g';
    }
    else if (b_n == "AB-")
    {
        ch == 'h';
    }

    if (ms.find(ch) == ms.end())
    {
        cout << "This blood is not available";
        cout << endl;
    }
    else {

        cout << "This blood is available!" << endl;

        string Name;
        string Sex;
        string Age;
        string Reason;
        string Phone_number;

        cout << "Patient name:";
        cin.ignore();
        getline(cin, Name);
        cout << "sex :";
        cin >> Sex;
        cout << "Age :" ;
        cin >> Age;
        cout << "Reason :";
        cin >> Reason;
        cout << "Phone Number:";
        cin >> Phone_number;

        //Patitent Slip
        
        cout << "\t\t\t Patitent Slip\n";
        cout << "\t\t\t~~~~~~~~~~~~~~~~\n";
        cout << "\tName  :" << Name << endl;
        cout << "\tSex   :" << Sex << endl;
        cout << "\tAge   :" << Age << endl;
        cout << "\tReason:" << Reason << endl;
        cout << "\tBlood Group :" << b_n << endl;
        cout << "Phone number :" << Phone_number << endl;
        cout << "\t\t\t\t\t\t Md.Rayhan\n";
        cout << "\t\t\t\t\t\t------------\n";
        cout << "\t\t\t\t\t\t signature\n";
        cout << endl << endl;

        cout << endl;
        ms.erase(ms.find(ch));
        ofstream newbloodFile("blood.txt", ios::out);
        for (auto x : ms)
        {
            newbloodFile << x;
        }
        newbloodFile.close();
    }
    // File Reading close ( Blood Found )

    bloodFile.close();
    main();
}


void admin()
{
    char s[20] = "1234";
    char str[20];
    cout << "Enter password:";
    cin >> str;
    if (strcmp(s, str) == 0)
    {
        cout << "welcome!!!";
        cout << endl;
        cout << "\t\t\tAdmin Area\n";
        cout << "\t\t\t----------";
        cout << endl;

        ifstream myFile("info.txt");
        string name, sex, age, blood;
        
        cout << "Name\t\tSex\t\tAge\t\tGroup";
        cout << endl;
        cout << "----\t\t---\t\t---\t\t-----";
        cout << endl;
        while (myFile >> name >> sex >> age >> blood )
        {
            cout << name << "\t\t" << sex << "\t\t" << age << "\t\t" << blood  << endl;
        }
        cout << endl << endl;
        
        cout << "Blood Details\n";
        cout << "-------------";
        cout << endl;
        
        ifstream ourFile("blood.txt");
        string all_blood;
        ourFile >> all_blood;

        int c_a;
        int c_b;
        int c_c;
        int c_d;
        int c_e;
        int  c_f;
        int c_g;
        int c_h;
        c_a = c_b = c_c = c_d = c_e = c_f = c_g = c_h = 0;

        for (char x : all_blood)
        {
            if (x == 'a')
            {
                c_a++;
            }
            else if (x == 'b')
            {
                c_b++;
            }
            else if (x == 'c')
            {
                c_c++;
            }
            else if (x == 'd')
            {
                c_d++;
            }
            else if (x == 'e')
            {
                c_e++;
            }
            else if (x == 'f')
            {
                c_f++;
            }
            else if (x == 'g')
            {
                c_g++;
            }
            else if (x == 'h')
            {
                c_h++;
            }
        }

        cout << "O+     : ";
        cout << c_a;
        cout<< endl;

        cout << "A+     : ";
        cout << c_b;
        cout<< endl;

        cout << "B+     : ";
        cout << c_c;
        cout<< endl;

        cout << "AB+    : ";
        cout << c_d;
        cout<< endl;

        cout << "O-     : ";
        cout << c_e;
        cout<< endl;

        cout << "A-     : ";
        cout << c_f;
        cout<< endl;

        cout << "B-     : ";
        cout << c_g;
        cout<< endl;

        cout << "AB-    : ";
        cout << c_h;
        cout<< endl;

        main();

    }
    
    else
        cout << "Please contact Rayhan to become an admin";
        cout << endl;
    
    main();


}
void exit() {
    main();
}