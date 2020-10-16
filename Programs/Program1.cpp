#include<iostream>
using namespace std;

class operations                        //Creating a class called operations
{
    private:                            
    int a , b, c1,c2;

    public:
    void input()                        // Member function that accepts the input
    {
        cin>>a>>b;
    }

    void addition()                     // to perform addition of 2 numbers
    {
        c1 = a+b;
    }

    void subtraction()                  //to perform subtraction of 2 numbers
    {
        c2 = a-b;
    }

    void display()                      // to display the results
    {
        cout<<"After Addition: "<<c1<<"\n"; 
        cout << "After Subtraction: " << c2 << "\n";
    }

};

int main()
{
    operations object;                  // creating an instance of the class

    cout<<"Enter the 2 numbers: ";
    object.input();
    object.addition();
    object.subtraction();
    object.display();
    return 0;
}
