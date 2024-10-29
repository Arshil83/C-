// Array of object using pointer

#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setdata(int a , float b){
    id = a;
    price=b;
    }
    void getdata(){
        cout<<"code of this item is: "<<id<<endl;
        cout<<"price of this item is: "<<price<<endl;
    }
};
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr; //important
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setdata(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    
    return 0;
}
