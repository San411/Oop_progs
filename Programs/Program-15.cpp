#include<iostream>
using namespace std;

class Area
{
    public:
    static int objectcount ;
    void compute(int length = 100, int breadth = 200)
    {
        objectcount++;
        cout<<"Area = "<<length*breadth<<"\n";
    }
    static int initialize()
    {
        return objectcount;
    }
};

int Area::objectcount = 0;

int main()
{
    
    Area com;
    com.compute(10,20);
    cout<<"Number of times the object is called: "<<Area::initialize();

}