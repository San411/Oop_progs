// Program to calculate the greatest of 3 numbers using 'this' pointer
#include<iostream>
using namespace std;

class greatest
{ 
    private:
    int num1,num2,num3;

    public:
    void input()
    {
        int num1,num2, num3;
        cout<<"Enter the 3 numbers";
        cin>>num1>>num2>>num3;
         this->num1 = num1;
        this ->num2 = num2;
        this ->num3 = num3;
    }

    int compute()
    {
        if(num1>num2 && num1>num3)
        {
            return num1;
        }
        else if (num2 > num1 && num2 > num3)
        return num2;
        else 
        return num3;
    }

    void display()
    {
        this->num1 = compute();
        cout<<num1;
    }
};

int main()
{
    greatest number;
    number.input();
    number.display();
    return 0;
}