// Accessing class members.

// You can used dot operator (i.e. className.memberName) to access data/members.

// By default, all data inside a class is private. So we use "public" to make it available.
// The advantage of having private/protected data is that it is easy to find bugs, because only public/friend
// methods can access it. It means these methods must have the bugs. Private data cannot be accessed or set outside
// its class.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Account
{
    public:
    string name;
    double balance;

    bool withdrawal(double amount);
    bool deposit(double amount)
    { 
        balance += amount;
        cout << amount << " was deposited." << endl;
        return true;
    }
};

int main(void)
{

    Account *new_account = new Account();
    new_account->name = "Eddie's Account";
    cout << new_account->balance << endl;

    // We need to dereferrence the pointer first in order to access the object's members/data.
    (*new_account).deposit(100.0);

    // But because dereferrence is so common, a new syntax was created called "arrow operator".
    cout << new_account->balance << endl;
    cout << new_account->name << endl;

    delete new_account;


    return 0;
}