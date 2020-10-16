// Program to display details using friend class and inline function

#include<iostream>
using namespace std;

class main_class
{
    private:
    char subject[10];
    char stream[10];
    int year;

    public:
    friend class friend_class;      // friend class declaration(Prototype)

    void input()                    // Inline function to fetch input
    {
        cin >> subject;
        cin >> stream;
        cin >> year;
        
    }
    
};

class friend_class                                  // Friend class definition
{
    public:
        void display(main_class details)            // Member function to display the details
        {
            cout << details.subject << "\n"
                 << details.stream << "\n"
                 << details.year;
        }
};

int main()
{
    main_class obj1;                                // instance of main class
    friend_class Details;                           // instance of friend class

    cout<<"Enter your Subject, Stream and Year:\n";
    obj1.input();

    cout<<"\nOutput using Friend class and Inline function:\n";
    
    Details.display(obj1);
    return 0;
}