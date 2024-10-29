/*
In C++, templates allow you to create functions or classes that can work with any data type. Templates are a way to write generic and reusable code, so you don’t have to write the same function or class multiple times for different data types.
*/
#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int m){
        size=m;
        arr = new T[size];
    }
    T dotProduct(vector & v){
    T d=0;
    for(int i=0; i<size; i++){
        d+=this->arr[i]*v.arr[i];
    }
    return d;
    }
};
int main()
{
    // vector <int>v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=5;

    // vector <int>v2(3);
    // v2.arr[0]=3;
    // v2.arr[1]=7;
    // v2.arr[2]=5;
    // int result = v1.dotProduct(v2);
    // cout<<result;


    vector <float>v1(3);
    v1.arr[0]=4.2;
    v1.arr[1]=2.3;
    v1.arr[2]=5.2;

    vector <float>v2(3);
    v2.arr[0]=3.2;
    v2.arr[1]=2.7;
    v2.arr[2]=2.5;
    int result = v1.dotProduct(v2);
    cout<<result;
    return 0 ;
}