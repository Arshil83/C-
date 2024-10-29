#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num: "<<endl;
    cin>>num;
    bool check=true;
    for(int i=2; i<num; i++){
    if(num%i==0){
        check=false;
        break;}
        
    }
   if(check==false){
    cout<<"not prime";
   }
   else{
    cout<<"prime";
   }
   return 0;
}