// #include<iostream>
// #include<fstream>

// using namespace std;
// int main()
// {
//     ofstream p;
//     p.open("sample62.txt");
//     p<<"This is my file\n";
//     p<<"HEY i am Arshil Kannhad\n";
//     p<<"HEllo KAli \n";
//     p.close();

//     ifstream get;
//     string st;
//     get.open("sample62.txt");
//     get>>st;
//     // cout<<st; //give one word of the first line
//     while(get.eof()==0){
// getline(get,st);
// cout<<st<<endl;
//     }
//     get.close();
//     return 0 ;
// }
#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream a;
    a.open("sample62.txt");
    a<<"I do this for only practice"<<endl;
    a<<"Don't Take it seriously"<<endl;
    a<<"I am just kidding"<<endl;
    a.close();

    ifstream get;
    string st;
    get.open("sample62.txt");
    while(get.eof()==0){
        getline(get,st);
        cout<<st<<endl;
    }
    get.close();
    return 0 ;
}