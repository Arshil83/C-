// multiple inheritence
#include<iostream>
using namespace std;
class Base1{
protected:
int base1int;
public:
void set_base1int(int a){
base1int=a;
}

};
class Base2{
    protected:
    int base2int;
public:
void set_base2int(int b){
base2int=b;
}
};
class Derived: public Base1, public Base2{

public:
void show(){
    cout<<"the value of base1 is "<<base1int<<endl;
    cout<<"the value of base2 is "<<base2int<<endl;
    cout<<"the sum of base1 and  base2 is "<<base2int+base1int<<endl;
}
};
/*
The inherited drived class will look like this:
Data members:
    base1int-->protected
    base1int-->protected
Members function:
    set_base1int()--->public
    set_base2int()--->public

*/
int main()
{
    Derived Arshil;
Arshil.set_base1int(10);
Arshil.set_base2int(20);
Arshil.show();
    return 0 ;
}