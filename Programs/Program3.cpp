// Program to display fibonacci numbers using Friend class and constructor

#include<iostream>
using namespace std;

class Fibonacci
{
    private:
    int a;
    int b;
    int c;
    int last_number;

    public:
    // Constructor to initialize the first 2 numbers
    Fibonacci(): a(0),b(1){} 

    void input()
    {
        cin>>last_number;
        cout<<a<<", "<<b<<", ";
    }

    // Friend class declaration
    friend class calc_fib;
};

//Friend class definition
class calc_fib
{
    public:
    void fib(Fibonacci num)
    {
        // Calculating Fibinacci series
        for(int i = 0;i<num.last_number;i++)
        {
            // Accessing private data members from previous class.
            num.c = num.a + num.b;
            cout<<num.c<<", ";
            num.a = num.b;
            num.b = num.c;
        }
    }
};

int main()
{
    // Creating Object
    Fibonacci number;
    calc_fib value;

    cout<<"Enter the Last Number: ";
    number.input();
    // cout<<number.a<<", "<<number.b;

    // Calling Friend Function
    value.fib(number);

    return 0;
}