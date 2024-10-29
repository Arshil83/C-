#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void setdata(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void getdata()
    {
        cout << "the value of real is: " << real << endl;
        cout << "the value of imaginary is: " << imaginary << endl;
    }
};
int main()
{
    // Complex c;
    // c.setdata(20, 40);  //simple way  now we use pointer method to make the object of Complex cass below
    // c.getdata();

    // Complex c;
    // Complex *ptr = &c;

    Complex *ptr= new Complex;
    // (*ptr).setdata(20, 40); // similar as good as ptr->setdata(20.40);
    // (*ptr).getdata();      // similar as good as ptr->getdata();

    ptr->setdata(20 , 40);
    ptr->getdata();   //this is called arrow operator


    // Array of objects
Complex *ptr1= new Complex[4];
    ptr1->setdata(2 , 4);
    ptr1->getdata();
    return 0;
}