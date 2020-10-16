#include<iostream>
using namespace std;

class University ;

class main_class
{
    private:
    int id;
    char name[20];
    int number;

    public:
    main_class(): id(10),name("DSU"),number(242) {};
    friend class University;                                // Friend class declaration
    friend void display(main_class, University);            // Friend function declaration
    
};

//Friend Class 
class University
{
    public:
    void change(main_class obj)
    {
    obj.number+=5;
    obj.id = 20;
    cout<< "\nID = " << obj.id << "\nNumber = " << obj.number << "\nName = " << obj.name;
    }
    friend void display(main_class, University);                // Friend Function
};

// Friend Function definition
void display(main_class obj1, University obj2)
{
    cout << "Before editing: \n"<<"\nID = "<<obj1.id<<"\nNumber = "<<obj1.number<<"\nName = "<<obj1.name;
    cout << "\nAfter Editing:\n ";
    obj2.change(obj1);
   
}

int main()
{
    University obj1;
    main_class obj;
    display(obj,obj1);
    return 0;
}