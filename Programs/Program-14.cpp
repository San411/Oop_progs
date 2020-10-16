//Program to decrement using operator overloading and pointer to functions
#include<iostream>
using namespace std;

class decrement
{
    public:
    int var;
    //Constructor to initialize
    decrement(int a)
    {
        this->var = a;
    }

    //Operator overloading
    int operator-()
    {
       cout<<"Value before decrementing: "<<var<<"\n";
        int dec = --var;
      return dec ;
    }

};

// Function to display
void display(int var)
{
    cout<<"Value after decrementing: "<<var;
}

int main()
{
    decrement dec(100);
    int var = -dec;

    // declaring the function
    void (*ptr)(int);
    ptr = &display;
    ptr(var);
    
    return 0;
}