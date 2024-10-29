#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    // int size1=end(arr1)-begin(arr1)
    // int size2=end(arr2)-begin(arr2)
int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);
// int size=size1+size2;
    int mergdarr[size1+size2];

    for(int i=0; i<size1;i++){
        mergdarr[i]=arr1[i];
    }
    for(int i=0; i<size2;i++){
        mergdarr[size1+i]=arr2[i];
    }

    for(int i=0; i<size1+size2;i++){
        cout<<"the value of meregdarr is: "<<mergdarr[i]<<" "<<endl;
    }
        return 0 ;
}