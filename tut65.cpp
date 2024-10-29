/*
class templates with multiple parameters(on1,two, three, or more)
template <class T1 ,class T2>
class name{
//body
}
*/

#include<iostream>
using namespace std;

template <class T1, class T2>
class cls{
    public:
    T1 data1;
    T2 data2;

    cls(T1 a, T2 b){
    data1=a;
    data2=b;
    }
    void display()
    {
        cout<<"Data1 = "<<this->data1<<" Data2 = "<<this->data2<<endl;

    }
};
int main()
{
    // cls<char, int> obj('A',18);
    // obj.display();


    cls<string, float> obj("ARshil",18.1);
    obj.display();
    return 0 ;
}