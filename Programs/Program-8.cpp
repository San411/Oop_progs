#include<iostream>
#include<cmath>

using namespace std;

class square_root
{
    private:
        float number;
        float root;
    public:
    // Constructor declaration
        square_root();

    // destructor declaration
        ~square_root();

    // Object argument and returns object
        square_root compute(square_root num)
        {   square_root obj;
           obj.root = sqrt(num.number);
           return obj;
        }
        void display()
        {
            cout<<"Square root of 81 = "<<root;
        }
};

//constructor definition
square_root::square_root() : number(81) {}

//destructor 
square_root::~square_root(){};

int main()
{
    square_root number,obj;
    
    // Returned Object
    obj = number.compute(number);
    obj.display();
    return 0;
}

