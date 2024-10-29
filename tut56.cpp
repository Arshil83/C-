#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base=1;
    virtual void display(){  //virtual function we can access the function of another using the object of another class
        cout<<"1 Displaying Baseclass variable var_base  "<<var_base<<endl;
    }
};

class Derivedclass :public Baseclass{
    public:
    int var_derived=2;
    virtual void display(){ //virtual function we can access the function of another using the object of another class
        cout<<"2 Displaying Baseclass variable var_base  "<<var_base<<endl;
        cout<<"2 Displaying derivedclass variable var_derived  "<<var_derived<<endl;
    }
};
int main(){
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    
    base_class_pointer= & obj_derived; //here we access the object of derived class with pointer of Basedclass 

    base_class_pointer->display(); 
     //it call th display() of derived class because we make the functions virtual
    //if we do not make  the function virtual than it call Baseclass display() b
}