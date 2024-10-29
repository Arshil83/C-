// virtual base class   (Hybrid inheritence)
#include<iostream>
using namespace std;

class Student{
protected:
int roll_number;
public:
void set_number(int a){
roll_number=a;
}
void get_number(){
    cout<<"your roll_number is: "<<roll_number<<endl;
}
};

class Test : virtual public Student{
protected:
int maths;
int physics;
public:
void set_marks(int m1 , int m2){
maths=m1;
physics=m2;
}
void get_marks(){
    cout<<"your marks in maths is: "<<maths<<endl;
    cout<<"your marks in physics is: "<<physics<<endl;
}
};

class Score{
    protected:
    int score;
    public:
    void set_score(int sc){
score=sc;
    }

void get_score(){
    cout<<"your score is: "<<score<<endl;
}
};

class Result: public Test , public Score{
protected:
int total;
public:
void display(){
    total=maths+physics;
get_number();
get_marks();
get_score();
cout<<"your total marks is: "<<total<<endl;
}
};

int main()
{
    Result r;
    r.set_marks(98.4,91);
    r.set_number(50028);
    r.set_score(9);
    r.display();
    return 0 ;
}