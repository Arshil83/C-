// multilevel inheritence
#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int r){
roll_number=r;
}

void Student::get_roll_number(){
cout<<"YOUR  ROLL NUMBER IS  "<<roll_number<<endl;
}

class Exam :public Student{
protected:
float maths;
float physics;
public:
void set_marks(float m1 , float m2);
void get_marks(void);
};

void Exam:: set_marks(float m1, float m2){
maths=m1;
physics=m2;
    
}
void Exam::get_marks(void){
    cout<<"Your Marks in physics and chemistry"<<maths<<endl<<physics<<endl;
}

class result:public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is : "<<(maths+physics)/2<<endl;
    }
};
int main()
/*
if we are inheriting B from A  and  C feof B :,,,,,,,,
*/
{
    result rp;
    rp.set_roll_number(28);
    rp.set_marks(90,97);
    rp.display();
    return 0 ;
}