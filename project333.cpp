#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
class Banking
{
public:
    double balance;
    float deposit;
};

// Function prototypes
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

int main()
{
    // system("color B0");
    //File Opening
    ofstream myfile("balance.txt", ios::out);
    int option;
    float balance = 0;
    int choose;
    bool again = false;

    int pass = 1234, in = 0;
    cout << endl;
    cout << "             _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _         " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           * >>>>>>>>>>>>>>>>>>> Hello <<<<<<<<<<<<<<<<<<< *       " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           * $-$-$-$-$< WELCOME TO ATM BANKING >$-$-$-$-$  *       " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           *                                               *       " << endl;
    cout << "           * _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ *       " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "               ------------------------------------------        " << endl;
    cout << "              |           Enter your Pin below           |       " << endl;
    cout << "               ------------------------------------------        " << endl;
    cout << "                               :>";
    cin >> in;
    cout << endl;
    cout << endl;

    system("cls");

    if (in == pass)
        again = true;
    else
    {
        while (pass != in)
        {
            cout << "           Incorrect Password! Try again! ";
            cin >> in;
            cout << endl;
            cout << endl;
            if (pass == in)
            {
                again = true;
                break;
            }
        }
    }

    while (again)
    {
        mainMenu();
        cout << "           =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "           Your Selection : ";
        cin >> option;
        cout << endl;

        system("cls");

        switch (option)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = moneyDeposit(balance);
            myfile << balance;
            break;
        case 3:
            balance = moneyWithdraw(balance);
            myfile << balance;
            break;
        case 4:
            menuExit();
            return 0;
        default:
            errorMessage();
            break;
        }
        cout << "          =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << endl;
        cout << "          Would you like to do another transaction?";
        cout << endl;
        cout << "         |< 1 > Yes\n";
        cout << "         |< 2 > No\n";
        cout << endl;
        cout << "         Enter Option : ";
        cin >> choose;

        system("cls");

        if (choose == 2)
        {
            again = false;
            menuExit();
        }
    }
    myfile.close();
    return 0;
}

void mainMenu()
{
    cout << endl;
    cout << endl;
    cout << "           * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "           *               ~ MAIN SCREEN ~               *" << endl;
    cout << "           * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << endl;
    cout << "           **PLEASE CHOSSE ONE OF THE OPTION BELOW**" << endl;
    cout << endl;
    cout << "           |< 1 >  Check Balance\n";
    cout << "           |< 2 >  Deposit\n";
    cout << "           |< 3 >  Withdraw\n";
    cout << "           |< 4 >  Exit\n\n";
}

void checkBalance(float balance)
{
    cout << endl;
    cout << "           You Choose to See your Balance" << endl;
    cout << endl;
    cout << "           Your Available Balance is BDT " << balance << endl;
}

float moneyDeposit(float balance)
{
    Banking d_deposit;

    float deposit;
    cout << endl;
    cout << "           You choose to Deposit money" << endl;
    cout << endl;
    cout << "           Your Balance is BDT " << balance << endl;
    cout << endl;
    cout << "           Enter your amount to Deposit BDT ";
    cin >> deposit;
    d_deposit.deposit = deposit;

    balance += deposit;

    system("cls");

    cout << "           Your New Balance is BDT " << balance << endl;

    return balance;
}

float moneyWithdraw(float balance)
{
    float withdraw;
    bool back = true;

    cout << endl;
    cout << "           You choose to Withdraw money" << endl;
    cout << endl;
    cout << "           Your Balance is BDT " << balance;
    cout << endl;

    while (back)
    {
        cout << endl;
        cout << "           Enter your amount to withdraw BDT ";
        cin >> withdraw;
        cout << endl;

        system("cls");

        if (withdraw < balance)
        {
            back = false;
            balance -= withdraw;
            cout << endl;
            cout << "          Your withdrawing money is BDT " << withdraw;
            cout << endl;
            cout << "          Your New Balance is BDT " << balance;
            cout << endl;
        }
        else
        {
            cout << "          You don't have enough money+++" << endl;
            cout << "          Please contact your Bank Customer Services" << endl;
            cout << "          Your Balance is:  " << balance;
            system("cls");
        }
    }
    return balance;
}

void menuExit()
{
    cout << endl;
    cout << endl;
    cout << "--------------------------*" << endl;
    cout << "--------------Take your receipt!!!-----------------" << endl;
    cout << "-----Thank you for using ATM Banking Machine!!-----" << endl;
    cout << "--------------------------*";
}

void errorMessage()
{
    cout << "+++!!!You selected an invalid number!!!+++" << endl;
}