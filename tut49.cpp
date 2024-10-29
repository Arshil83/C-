// Inialization  list in constructors
#include<iostream>
using namespace std;

/*
Synatx for intialization list  in coonstructir:
Constructor (argument-list) : inialization-section
{
assignment + other code;
}
class Test{
int a;
int b;
public:
Test(int i, int j)  : a(i) , b(j) ---> it means a=-i and b=j{
// constructor body;
}
}
*/
class Test{
    int a ;
    int  b;
    public:
    // Test(int i , int j) : a(i), b(j)
    // Test(int i , int j) : a(i), b(i+j)
    // Test(int i , int j) : a(i), b(2*j)
    // Test(int i , int j) : a(i), b(a+j)//this line is working because the value of is available  but if the same thing we apply on b then it show error
    // it is worling on a because we initialize a first so the value of  a is available and its working correctly
    Test(int i , int j) : b(j) , a(b+i)//it show garbage value
    {
        cout<<"constructor is called"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
    Test(4,6);

    return 0 ;
}