#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BloodBank {
public:
    static int bloodgroup[8];

    static void loadBloodData(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            for (int i = 0; i < 8; i++) {
                file >> bloodgroup[i];
            }
            file.close();
        }
    }

    static void saveBloodData(const string& filename) {
        ofstream file(filename);
        if (file.is_open()) {
            for (int i = 0; i < 8; i++) {
                file << bloodgroup[i] << " ";
            }
            file.close();
        }
    }
};

int BloodBank::bloodgroup[] = {0, 0, 2, 3, 0, 0, 5, 0};

class Admin {
public:
    void display();

    Admin() {
        string s = "Md.Rayhan";
        string str;
        cout << "Enter password: ";
        cin >> str;
        if (s == str) {
            cout << "Welcome!!!" << endl;
            display();
        } else {
            cout << "Please contact Rayhan to become an admin" << endl;
        }
    }
};

void Admin::display() {
    cout << "A +ve: " << BloodBank::bloodgroup[0] << endl;
    cout << "O +ve: " << BloodBank::bloodgroup[1] << endl;
    cout << "B +ve: " << BloodBank::bloodgroup[2] << endl;
    cout << "AB +ve: " << BloodBank::bloodgroup[3] << endl;

    cout << "A -ve: " << BloodBank::bloodgroup[4] << endl;
    cout << "O -ve: " << BloodBank::bloodgroup[5] << endl;
    cout << "B -ve: " << BloodBank::bloodgroup[6] << endl;
    cout << "AB -ve: " << BloodBank::bloodgroup[7] << endl;
}

class BloodManagement {
public:
    void run(const string& filename) {
        BloodBank::loadBloodData(filename);

        int choice = 0;

        while (choice != 4) {
            cout << "\tBlood Management" << endl << endl << endl;
            cout << "Enter 1 if you are the admin" << endl;
            cout << "2 if you are a donor" << endl;
            cout << "3 if you are a patient" << endl;
            cout << "4 if you want to exit: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    Admin admin;
                    break;
                }
                default:
                    break;
            }
        }

        BloodBank::saveBloodData(filename);
    }
};

int main() {
    BloodManagement bloodManagement;
    bloodManagement.run("blood_data.txt");

    return 0;
}