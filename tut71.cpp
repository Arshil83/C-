#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    // vector<int> vec1;
    // int element, size;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // display(vec1);
    // vec1.pop_back(); //remove last element of the array
    // display(vec1);


    
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,566); //print 566 at first position
    // display(vec1);

      //  // vector<int> vec1;      //zero length integer vector
    // vector<char> vec2(4);  //4-element character vector
    // vec2.push_back('c');
    // display(vec2); //output c
    // vector<char> vec3(vec2);//4-element character vector from vec2
    // display(vec3); output c
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4); // print ( 3 ) 6 times
    return 0;
}
