// Revising pointer: new and delete keywords

#include<iostream>
using namespace std;
int main()
{
    // Basic example of pointer
    int a=4;
    int* ptr=&a;
    cout<<"the value of a is: "<<*ptr<<endl;
    cout<<"the adrees of a  is: "<<ptr<<endl;

    // new operator
    int *p= new int(40);
    cout<<"the value at adrees p is: "<<*p<<endl;

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20; //*(arr+1)=20 ---> arr[1]=20 both are correct way
    arr[2]=30;
    // delete[] arr; ow arr are free to store data

    cout<<"the value of arr[0] is: "<<arr[0]<<endl;

    cout<<"the value of arr[1] is: "<<arr[1]<<endl;
    cout<<"the value of arr[2] is: "<<arr[2]<<endl;


        return 0 ;
}