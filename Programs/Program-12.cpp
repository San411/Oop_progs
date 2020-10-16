#include<iostream>
#include<cmath>
using namespace std;

class operations
{
    public:
        int num1;
        // Constructor Overloading
        operations()
        {
            cout << "1st Constructor invoked.\n";
            
    }
    operations(int a)
    {
        cout<<"2nd Constructor invoked.\n";
        num1 = a;
        
    }

    

    //Destructor 
    ~operations()
    {
        cout << "Destructor invoked.\n";
    }
};

//pointer to functions
void root(int num)
{
    cout << "Square root: " << sqrt(num)<< "\n";
}

int main()
{

    operations obj1,obj2(81);

    //function call
    int num = obj2.num1;
    void (*ptr1)(int);
    ptr1 = root;
    ptr1(num);

    return 0;
}