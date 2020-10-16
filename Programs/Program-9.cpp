
// Program to perform basic operations using pointers
#include<iostream>
using namespace std;

//global variable
int sum ;

class operation
{
    public:
    //Member Function of returntype pointer
    int* addition(int num1,int num2)
    {
        sum = num1 + num2;
        // Return by reference
        return &sum;
    }

    // passing reference to functions
    void subtraction(int* num1,int* num2)
    {
        int diff = *num2- *num1;
        cout<<"Difference = "<<diff;
    }
};

int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

operation obj, *ptr;
ptr = &obj;

//Pointers to object
int* sum = ptr->addition(num1,num2);
cout<<"Sum = "<<*sum<<"\n";

int* a = &num1;
int* b = &num2;

obj.subtraction(a,b);
return 0;

    
}