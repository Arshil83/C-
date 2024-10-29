// function templates with parameters 
#include<iostream>
using namespace std;

template <class T1, class T2>

float funcaverage(T1 a, T2 b){
    float average =(a+b)/2.0;
    return average;
}

template <class T>
void swappp(T &x ,T &y){
    T temp=x;
    x=y;
    y=temp;
}
int main()
{
    float result=funcaverage(5.3,2);
    cout<<"Average = "<<result<<endl;
    int x=6,y=4;
    cout<<endl;
    swappp(x,y);
    cout<<"x = "<<x<<" y = "<<y;

    return 0 ;
}