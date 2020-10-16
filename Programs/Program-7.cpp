// Program to print the even number in the given range using array of objects

#include<iostream>
using namespace std;

class Range
{    
    public:

    // checks if the number is even 
        void compute(int i)
        {
            
            if (i % 2 == 0)
            cout<<i<<"\n";
            
    }
};

int main()
{
    int min, max;

    cout<<"Enter the minimum and Maximum number: ";
    cin>>min>>max;
    
    // Creating an array of object
    for(int i=min; i<max+1; i++)
    {
        Range arr[i];
        arr[i].compute(i);
    }
    
    return 0;
    
}