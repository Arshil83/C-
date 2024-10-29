// // AMBIGUITY RESOLUTION IN INHERITENCE

// #include<iostream>
// using namespace std;

// class Base1{
// int a;
// public:
// void greet(){
//     cout<<"hello world"<<endl;

// }
// };

// class Base2{
//     int b;
//     public:
//     void greet(){
//         cout<<"Good morning world";
//     }

// };

// class Derived :public Base1 , public Base2{
//     public:
//     void greet(){
//         Base2::greet();
//         // Base1::greet(); --> // we can call only or any one of them like this
// }
// };
// int main()
// {
//     // Base1 b1;
//     // b1.greet();

//     // Base2 b2;
//     // b2.greet();

//                     //if we call the function by the object of thier classes their is no prob it will work
//                     //  but if call the function by the inherited class object then it show ambiguity error because the function has same name in both classes so compiler will be confused to call.
//                     // SOLUTION : We have to use scope resolution operator in Inherited class like this : void Base1::greet()


//     Derived d;
//     // d.greet(); it call th greet of base 2 bcz we use Base2::greet in Inherited class 
//     return 0 ;
// }


// EXAMPLE 2 OF AMBIGUITY RESOLUTION
// self Ambiguity resolution
#include<iostream>
using namespace std;

class A{
public:
void say(){
    cout<<"hello world!";
}
};
class B : public A{
public:
void say(){
    cout<<"Good morning ";
}
};

int main(){
    //  Self ambiguity resoluution
    A a;
    a.say();

    B b;
    b.say();
}