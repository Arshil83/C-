// constructor in Derived class

#include<iostream>
using namespace std;

/*case1:
class B: Class A{
//order of exectution of constructor --> A() Then B()
};

case2:
class A:public B, Public c[]
//order of execution of constructor --> B() then C() andd A()
};

case3:
class A: public B, virtual public C()
//order of execution of constructot --> C
then B() and A()
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){
data1=i;
cout<<" Base1 constructor is called"<<endl;
    }
    void printdatd1(void){
        cout<<"the value of data1 is: "
        <<data1<<endl;
        // cout<<"the value of data1 is: "
        // <<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
data2=i;
cout<<" Base2 constructor is called"<<endl;
    }
    void printdatd2(void){
        cout<<"the value of data2 is: "
        <<data2<<endl;
        // cout<<"the value of data1 is: "
        // <<data1<<endl;
    }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b , int c, int d) : Base1(a),Base2(b){
derived1=c;
derived2=d;
cout<<"Derived class constructor called"<<endl;
    }

    void printdataDerived(){
        cout<<"the value of derived1 is: "<<derived1<<endl;
        cout<<"the value of derived2 is: "<<derived2<<endl;
    }
    };

int main()
{
    Derived Arsh(1,2,3,4);
Arsh.printdataDerived(); 
return 0 ;
}