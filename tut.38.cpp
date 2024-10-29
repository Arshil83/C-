// Single inheritence
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and it is not inehritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
class Derived : public Base
{ // class being derived publically
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    data3 = data2 * getdata1(); // Data is not access because it is the private member of the Base class
    // so we can access data1 through the function getdata1
}
void Derived::display()
{
    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of datd2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl; // data is private but it is own member of derived class so it can be called by the object of derived class in the main function
}
int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}

// // if we make the derived class is private
// #include<iostream>
// using namespace std;

// class Base{
// int data1;// private by default and it is not inehritable
// public:
// int data2;
// void setdata();
// int getdata1();
// int getdata2();
// };
// void  Base :: setdata(){
// data1=10;
// data2=20;
// }
// int Base::getdata1(){
//    return data1;
// }
// int Base::getdata2(){
//     return data2;
// }
// class Derived:private Base{//class being derived publically
// int data3;
// public:
// void process();
// void display();
// };
// void Derived::process(){
//     setdata();
//     data3=data2*getdata1();  //Data1 is not access because it is the private member of the Base class
//     //so we can access data1 through the function getdata1
// }
// void Derived::display(){
//     cout<<"value of data1 is "<<getdata1()<<endl;
//     cout<<"value of datd2 is "<<data2<<endl;
//     cout<<"value of data3 is "<<data3<<endl; //data is private but it is own member of derived class so it can be called by the object of derived class in the main function
// }
// int main()
// {
//   Derived   der;
// //   der.setdata();
// // we make  derived class is private so we cannot access this by the object of derived class in the main
// // we can acces this in the process  function
// // getdata1 and gaetda2 are the public member of base class but now in derivded class these are the private  member of derived class because we derived private class and we can access getdat1 and getdata2 only by  the functions of
// //derived class like setdata is called in the process function
//   der.process();
//   der.display();
//     return 0 ;
// }
