#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

// Class representing a bank account
class BankAccount {
private:
    
    float balance;
    int accountNumber; // You can add an account number if needed

public:
    BankAccount(float initialBalance, int accountNum) : balance(initialBalance), accountNumber(accountNum) {}

    float getBalance() {
        return balance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            logTransaction("Deposit", amount);
        }
    }

    bool withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            logTransaction("Withdraw", amount);
            return true; // Withdrawal successful
        }
        return false; // Withdrawal failed
    }
};

// Function declarations
void logTransaction(const string &transactionType, float amount);
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance, float &deposit);
float moneyWithdraw(float balance, float &withdraw);
void changePin(int &pass);
void menuExit();
void errorMessage();

int main() {
    system("color B0");

    int option;
    int choose;
    bool again = false;
    float deposit = 0.0;
    float withdraw = 0.0;

    int pass = 1234; // Initial PIN
    int in = 0;

    cout << endl;
    cout << "             _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _         " << endl;
    // ...

    BankAccount account(15000.00, 123456); // Initialize the BankAccount object

    while (again) {
        mainMenu();
        cout << "           =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "           Your Selection : ";
        cin >> option;
        cout << endl;

        system("cls");

        switch (option) {
            case 1:
                checkBalance(account.getBalance());
                logTransaction("Check Balance", 0.0);
                break;
            case 2:
               double  balance = moneyDeposit(account.getBalance(), deposit);
                account.deposit(deposit);
                break;
            case 3:
                balance = moneyWithdraw(account.getBalance(), withdraw);
                if (account.withdraw(withdraw)) {
                    // Withdrawal was successful
                    balance = account.getBalance();
                } else {
                    // Withdrawal failed
                    cout << "Withdrawal failed. Insufficient balance or invalid amount." << endl;
                }
                break;
            case 4:
                changePin(pass);
                break;
            case 5:
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
        cout << "          |< 1 > Yes\n";
        cout << "          |< 2 > No\n";
        cout << endl;
        cout << "          Enter Option : ";
        cin >> choose;

        system("cls");

        if (choose == 2) {
            again = false;
            menuExit();
        }
    }

    return 0;
}

// Other functions and the BankAccount class remain the same

void mainMenu()
{
    cout << endl;
    cout << endl;
    cout << "           * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "           *               ~ MAIN SCREEN ~               *" << endl;
    cout << "           * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << endl;
    cout << "           **PLEASE CHOOSE ONE OF THE OPTIONS BELOW**" << endl;
    cout << endl;
    cout << "           |< 1 >  Check Balance\n";
    cout << "           |< 2 >  Deposit\n";
    cout << "           |< 3 >  Withdraw\n";
    cout << "           |< 4 >  Change PIN\n";
    cout << "           |< 5 >  Exit\n\n";
}

void checkBalance(float balance)
{
    cout << endl;
    cout << "             ~~~~~~~~~~~~~~~" << endl;
    cout << "             * You Choose to Check Balance *" << endl;
    cout << "             ~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "           Your Available Balance is BDT " << balance << endl;
}

float moneyDeposit(float balance, float &deposit)
{
    cout << endl;
    cout << "           ~~~~~~~~~~~~~~~" << endl;
    cout << "           * You choose to Deposit money *" << endl;
    cout << "           ~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "           Your Balance is BDT " << balance << endl;
    cout << endl;
    cout << "           Enter your amount to Deposit BDT: ";
    cin >> deposit;

    balance += deposit;

    system("cls");
    cout << endl;
    cout << endl;
    cout << "          Your New Balance is BDT " << balance << endl;
    return balance;
}

float moneyWithdraw(float balance, float &withdraw)
{
    bool back = true;

    cout << endl;
    cout << "           ~~~~~~~~~~~~~~~~" << endl;
    cout << "           * You choose to Withdraw money *" << endl;
    cout << "           ~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "           Your Balance is BDT " << balance;
    cout << endl;

    while (back)
    {
        cout << endl;
        cout << "           Enter your amount to withdraw BDT: ";
        cin >> withdraw;
        cout << endl;

        system("cls");

        if (withdraw <= balance)
        {
            back = false;
            balance -= withdraw;
            cout << endl;
            cout << "          Your withdrawing money is BDT " << withdraw;
            cout << endl;
            cout << endl;
            cout << "          Your New Balance is BDT " << balance;
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "          ~~~~~~~~~~~" << endl;
            cout << "          ~ You don't have enough money !!~" << endl;
            cout << "          ~~~~~~~~~~~" << endl;
            cout << endl;
            cout << "          Please contact your Bank Customer Services" << endl;
            cout << endl;
            cout << "          Your Balance is BDT " << balance;
            cout << endl;
        }
    }
    return balance;
}

void changePin(int &pass)
{
    int currentPin;
    int newPin;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "          ------------------------------" << endl;
    cout << "          *Enter your current PIN: ";
    cin >> currentPin;

    if (currentPin == pass)
    {
        cout << endl;
        cout << "          *Enter your new PIN: ";
        cin >> newPin;
        pass = newPin;
        cout << "          -------------------------------" << endl;
        cout << endl;
        cout << "          PIN changed successfully" << endl;
    }
    else
    {
        cout << endl;
        cout << endl;
        cout << "          #Incorrect current PIN. PIN change failed !!!" << endl;
    }
}

void menuExit()
{
    cout << endl;
    cout << endl;
    cout << "               --------------------------*" << endl;
    cout << "               --------------Take your receipt!!!-----------------" << endl;
    cout << "               -----Thank you for using ATM Banking Machine!!-----" << endl;
    cout << "               --------------------------*" << endl;
}

void errorMessage()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "  & & & & & & & & & & & & & & & & & & & & & & &" << endl;
    cout << "  & +++!!!You selected an invalid number!!+++ &" << endl;
    cout << "  & & & & & & & & & & & & & & & & & & & & & & &" << endl;
}

void logTransaction(const string &transactionType, float amount)
{
    ofstream logFile("PROJECT.txt", ios::app); // Open the file in append mode
    if (logFile.is_open())
    {
        time_t now = time(0);
        tm *timeinfo = localtime(&now);
        char timestamp[80];
        strftime(timestamp, 80, "%Y-%m-%d %H:%M:%S", timeinfo);

        logFile << "Timestamp: " << timestamp << endl;
        logFile << "Transaction Type: " << transactionType << endl;
        logFile << "Amount: BDT " << amount << endl;
        logFile << "-------------------------" << endl;
        logFile.close();
    }
    else
    {
        cout << "Error opening the log file." << endl;
    }
}