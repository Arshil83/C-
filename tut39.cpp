#include<iostream>
using namespace std;
class Base{
protected:
int a;
private :
int b;
};

/*
for a protected member:
                        Public Derivation      Private Derivation       Protected Derivation
1. private members       not inherited          not inherited             not ineherited
2. protected members    protected              private                   protected
3. public members       public                 private                   protected 
*/
class Derived : Base{

};
int main(){
    Derived d;
    Base b;
    // cout<<d.a;   // will not work since a is protected in both Base as well as Derived class
    // cout<<b.a;

}