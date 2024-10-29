#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
int a;
int b;
public:
void getdata1(){
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;}
void print1(){
    cout<<"sum is "<<a+b<<endl;
    cout<<"sub is "<<a-b<<endl;
    cout<<"mul is "<<a*b<<endl;
    cout<<"div is "<<a/b<<endl;
}
};
class scientificcalculator{
    int a,b;
public:
void getdata2(){
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;}
void print2(){
    cout<<"value of  cos(a) "<<cos(a)<<endl;
    cout<<"value of sin(b)  "<<sin(a)<<endl;
    cout<<"value of tan(a) "<<tan(a)<<endl;
    cout<<"value of tan(b) "<<tan(a)<<endl;
}

};

class hybridcalculator :public simplecalculator, public scientificcalculator{
    public:
};
int main()
{
    // simplecalculator arsh;
    // arsh.getnum();
    // arsh.display();

    // scientificcalculator ak;
    // ak.getdata();
    // ak.print();

hybridcalculator calc;

calc.getdata1();
    calc.print1();


    calc.getdata2();
    calc.print2();
    return 0 ;
}