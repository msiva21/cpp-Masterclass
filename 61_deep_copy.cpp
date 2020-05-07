// Deep copy

// Use deep copy when you have raw pointers. Make copies of the values but create unique pointers. That is, 
// each copy will have a unique storeage in the heap.

#include<iostream>
#include<string>
using namespace std;

class Deep
{
private:
    int *data;
public:

    int get_data_value(void){return *data;}
    void set_data_value(int d){*data = d;}

    // Constructor
    Deep(int d);
    // Copy constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep(void);
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::~Deep(void)
{
    delete data;
    cout << "Destructor freeing data." << endl;
}

// In Deep copy, you allocate storage for the data in the orginal pointer, and then copy the original data into 
// the newly created storage. This way, the orginal and copy pointer point to different addresses but still contain
// the same value (the value during the copy construction process).
Deep::Deep(const Deep &source)
{
    data = new int;
    *data = *source.data;
    cout << "Copy constructor - Deep copy!" << endl;
}

void display_deep(Deep s)
{
    cout << s.get_data_value() << endl;
}

int main(void)
{
    Deep obj1(100);
    display_deep(obj1);

    Deep obj2{obj1};

    cout << "break 1" << endl;
    
    obj2.set_data_value(1000);
    display_deep(obj2);
    
    cout << "break 2" << endl;
    
    display_deep(obj1);

    return 0;
}
