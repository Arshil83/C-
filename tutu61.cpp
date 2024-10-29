#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //connecting our file with hout stream
    ofstream aout("sample61.txt");

    // creating a name string filling it with the string entered by the user  
    string name;
    cout<<"enter your name ";
    cin>>name;

    // writinh a string to the file 
    aout<<name + " is my name";
    aout.close();


    ifstream ain("sample61.txt");
    string content;
    ain>>content;
    cout<<"the content of this file is : "<<content;
    ain.close();
    
    return 0 ;
}