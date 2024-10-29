// File I/O  

#include<iostream>
#include<fstream>

/*
The useful clases for working eith files in c++ are:
1. fstreambase
2. ifstream --> Derived from fstreambase
3. ofstreamn--> Derived from fstreambase
*/

/*
IN order work with file in c++, you will have to open it. Primarily , there are two ways to open a file:
1.Using the constructor
2.Uisng the member function open() of the class
*/
using namespace std;
int main()
{
    string  st = "ARSHIL KANNHAD S/O ABDUL SAMI";
    //opening files using constructor and writing it
    ofstream out("Sample60.txt");//write operation 
    out<<st;
    cout<<st;

// //opening files using constructor and reading it
//     string st2;
// ifstream in("Sample60B.text"); //Read operation

// // in>>st2;//it print only one starting word so i use getline function to print whole
// getline(in,st); // it print first line
// getline(in,st2); // it print second line
// cout<<st2;

    return 0 ;
}