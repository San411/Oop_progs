// Program to find greatest of 3 numbers using different constructors and destructors

#include<iostream>
using namespace std;

class constructors
{
    private:
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    public:

        constructors(int a, int b, int c)
        {
            cout<<"Parameterized constructor invoked.\n";
            num1 = a;
            num2 = b;
            num3 = c;
        }

        constructors(constructors &copy_constructor)
        {
            cout << "Copy Constructor Invoked\n";
            
        }

        int greatest()
        {
            if (num1 > num2 && num1 > num3)
            {
                return num1;
            }
            else if (num2 > num1 && num2 > num3)
            {
                return num2;
            }
            else
            {
                return num3;
            }
        }

        ~constructors()
        {
            cout<<"Destructor invoked\n ";
        }
};

int main()
{
    int a=1, b=2, c=3;
    constructors parameterised(a,b,c);
    constructors copy(parameterised);
    cout<<"The greatest of 3 numbers: "<<parameterised.greatest()<<"\n";
    return 0;
}


