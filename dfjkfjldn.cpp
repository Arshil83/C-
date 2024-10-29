#include<iostream>
using namespace std;

// int swap(int a , int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"the value of a after swaping is : "<<a<<endl;
//     cout<<"the value of b after swaping is : "<<b<<endl;
// }
// int main()
// {
//     swap(20,6);
//     return 0 ;
// }

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n* fact(n-1);
}
int main(){
    // int n;
    // cout<<"enter the value of n";
    // cin>>n;
    fact(9);
    cout<<"factorial of 9 is: "<<fact(9);
}