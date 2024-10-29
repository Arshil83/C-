#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"1 Displaying Baseclass variable var_base  "<<var_base<<endl;
    }
};

class Derivedclass :public Baseclass{
    public:
    int var_derived;
    void  display(){
        cout<<"2 Displaying Baseclass variable var_base  "<<var_base<<endl;
        cout<<"2 Displaying derivedclass variable var_derived  "<<var_derived<<endl;
    }
};


int main()
{
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = & obj_derived;  //pointing to base class pointer to derived class object

    base_class_pointer->var_base=34;
    
    base_class_pointer->display(); // it point the base class and only base clas display function is called

    // base_class_pointer->var_derived=34;//not valid



// Derivedclass *derived_class_pointer;
// derived_class_pointer= & obj_derived;

// base_class_pointer->var_base=105;
// derived_class_pointer->var_derived=94;

// derived_class_pointer->display();
    return 0 ;
}