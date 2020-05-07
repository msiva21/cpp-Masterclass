// Shallow copy

// It occurs when a raw pointer data member is copied using a pass_by_value method.
// Both pointers, from the original and copied object, point to the same location in the heap, but when one of
// those objects is destroyed the other object still points to the same address and thinks the address is still
// valid. This is a problem!

#include<iostream>
#include<string>
using namespace std;

class Shallow
{
private:
    int *data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(void){return *data;}

    // Constructor
    Shallow(int d);

    // Copy constructor
    Shallow(const Shallow &source);

    // Destructor
    ~Shallow(void);
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source):data{source.data}
{
    cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow(void)
{
    delete data;
    cout << "Destructor freeing data." << endl;
}

// The problem arrives in this function that makes a copy of a Shallow object. After the copy from this function 
// is destroyed, the original Shallow object points to invalid data since it was destroyed along this function's
// copy. 
void display_shallow(Shallow s)
{
    cout << s.get_data_value() << endl;
}

int main(void)
{
    Shallow obj1(100);
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    // The crash happens when the destructor comes in a tries to delete the "data" pointer member of these 2 objects.

    return 0;
}