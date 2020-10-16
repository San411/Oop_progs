//program to swap number using function overloading and dynamic memory allocation
#include<iostream>
using namespace std;

class Swap
{
    public:
    // method with 3 parameters
    void swap_number(int* a,int* b,int* c)
    {
        cout << "\na,b,c before swaping: " << *a <<  *b << *c << "\n";
        //Swapping 3 variables
        int* temp = c;
        c = a;
        a = b;
        b = temp;
        cout << "\na,b,c after swaping: " << *a << "\t" << *b << "\t" << *c << "\n";
    }

    // method with 2 parameters
    void swap_number(int* a,int* b)
    {
        cout << "\na,b before swaping: " << *a << "\t" << *b << "\n";
        //Swapping 2 variables
        int* temp = b;
        b = a;
        a = temp;
        cout << "\na,b after swaping: " << *a << "\t" << *b << "\n";
    }
};

int main()
{

    int num1 = 10,num2 = 20,num3 = 30;

    Swap number;
    int* ptr1,*ptr2,*ptr3;

    //Dynamic Memory allocation
    ptr1 = new int;
    ptr1 = &num1;
    ptr2 = new int;
    ptr2 = &num2;
    ptr3 = new int;
    ptr3 = &num3;

    // Function overloading
    number.swap_number(ptr1,ptr2,ptr3);
    number.swap_number(ptr1, ptr2);

    //Memory deallocation
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}
