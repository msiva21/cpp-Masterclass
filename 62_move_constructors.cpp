// Move contructors

/**************************
 Copy constructors can be very expensive on performance since they are called a lot due to the semantics of 
 C++. In the standard 11, move semantics and constructors were introduced. This move constructor moves rather than
 copy. It is reconmmended to use when you have raw pointers.

 r-value references are references that allow reference to temporal objects like the one created to store the 
 expression 100 + 200. 300 is stored in this temporary object, and therefore we can refered to 300 using r-value
 references.

 Use && to reference r-values.
***************************/

/************************
 A parameter that needs to be a reference to an l-value cannot accept a r-value reference, and vice-versa.
 However, you can overload the function since the compiler will know which value is a l-value or r-value reference.
 Once function will have a single '&' and the other will have double '&&' in its parameters. 
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Move
{
private:
    int *data;
public:
    int get_data_value(void){return *data;}
    void set_data_value(int d){*data = d;}
    Move(int d);
    Move(const Move &source);

    // Move constructor
    Move(Move &&source) noexcept; // noexcept is needed since without it, it will use the copy constructor.

    ~Move(void);
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for " << d << " at  " << data << endl;
}

Move::Move(const Move &source) : Move{*source.data} // We'll delegate the copy constructor to the constructor method.
{
    cout << "COPY of constructor    " << data << endl;
}

Move::Move(Move &&source) noexcept : data{source.data}
{
    source.data = nullptr; // Steal the data and then null out the source pointer.
    cout << "MOVE constructor for   " << data << endl;
}

Move::~Move(void)
{
    if (data != nullptr)
        cout << "Destructor for         " << data << endl;
    else
        cout << "Destructor for nullptr." << endl;
    
    delete data;
}

// The copy constructor is never used when the move constructor is available.

int main(void)
{
    // r-value referrences
    // int x{100};
    // int &&left = 200;
    // cout << &x << endl;
    // cout << &left << endl;
    // left = 10;
    // cout << left << endl;

    cout << endl;
    vector<Move> vec;
    vec.push_back(Move{10}); // Remember this vector is making copies of this r-value temporary "Move{10}".
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    cout << endl;
    return 0;
}