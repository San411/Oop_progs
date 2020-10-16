//Program to calculate Square root using operator overloading
#include<iostream>
#include<cmath>
using namespace std;

class non_friend
{
public:
    // Member Object
    int num2;

    // Constructor to initialize the object's value

    non_friend(int a)
    {
        this->num2 = a;
    }
    void operator-()
    {
        cout<<"1)  Operator Overloading. Without using friend function. ";
        cout << "\nSquare root: " << sqrt(num2) << "\n";
    }
} ;

class sqr_root
{
public:
    // Member Object
    int num1;

    // Constructor to initialize the object's value
    sqr_root()
    {
        this->num1 = 49;
        
    }
    friend void operator-(sqr_root);
};

void operator-(sqr_root obj1)
{
    cout<<"\n2)  Friend Function called.\n";
    cout << "Root : " << sqrt(obj1.num1) << "\n";
}

int main()
{
    sqr_root obj1;
    non_friend obj2(81);
    -obj2;
    -obj1;
    return 0;
}
