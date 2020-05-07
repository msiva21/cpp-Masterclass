// Implementing class methods

// You can define methods inside the class declaration, and they will become "implicitly inline" methods, but 
// they need to be short and simple.
// It is more common to define methods outside the class using the syntax "class_name::class_method", as well
// as large methods.

// Methods have access to the attributes already, so no need to pass them as parameters.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Account
{

private:
    string name;
    double balance;

public:

    // Declared inline:
    void set_balance(double amount) { balance = amount;}
    double get_balance(void) { return balance;}

    // Declared outside the class declaration:
    void set_name(string name);
    string get_name(void);
    bool deposit(double amount);
    bool withdraw(double amount);
};

// Implementing member methods outside class declaration:

void Account::set_name(string account_name)
{
    name = account_name;
}

string Account::get_name(void)
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if ((balance - amount) < 0)
        return false;
    else
    {
        balance -= amount;
        return true;
    }

}

int main(void)
{
    cout << endl;
    cout << "Start" << endl;

    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    cout << "Name of account is: " << frank_account.get_name() << endl;

    if (frank_account.deposit(200.0))
        cout << "Deposit OK." << endl;
    else
        cout << "Deposit not allowed." << endl;
    
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK." << endl;
    else
        cout << "Not sufficient funds." << endl;
    
    if (frank_account.withdraw(1500.0))
        cout << "Withdrawal OK." << endl;
    else
        cout << "Not sufficient funds." << endl;


    cout << endl;
    cout << "End" << endl;
    return 0;
}

