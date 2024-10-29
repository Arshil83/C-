// this-> pointer 

#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int a){
        // a=a; //its working but we get garbage value  so we i use this-> pointer
        this->a=a;
    }

    // A & setdata(int a){
    //     this->a=a;
    //     return *this;
    // }  // we can call both set and getdata at one time using refrence variable 
    //like -->  A a;
    // a.setdata(4).getdata();
    void getdata(){
        cout<<"the value of a is: "<<a<<endl;
    }
};

//  (this->) is a keyword which is pointer which point the object which invokes the member function
int main()
{
    A Arsh;
    Arsh.setdata(4);
    Arsh.getdata();
    return 0 ;
}