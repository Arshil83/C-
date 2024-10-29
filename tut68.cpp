// Member function Templates & overloading templates functions 
#include<iostream>
using namespace std;

template <class T>
class Arsh{
    public:
    T data;
    Arsh(T a){
        data = a;
    }
    void display();
    // void display(){
    //     cout<<"Data = "<<data;
    // } // we can write the function body outside the class
};
template <class T>
void Arsh<T>:: display(){
    cout<<"Data = "<<data;
}
int main()
{
    Arsh<int> A(5.3);
    A.display();
    cout<<endl;
    Arsh<float> B(5.3);
    B.display();
    return 0 ;
}