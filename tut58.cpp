// Abstarct Base Class & Pure Virtual Functions

// in Abstrct base class --> present minimum one pure Virtual function

#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s , float r){
        title=s;
        rating=r;
    }
    virtual void display()=0; // Do nothing function -->Pure Virtual Function
    /*
    Note: 1. if we make any pure virtual function [ virtual void display()=0; ] then if we do not make the [ virtual void display() ] function in other inherited class then compiler throws an error
    2. otherwise if we do not make pure virtual function if  make only  virtual function  then there is no problem if we do not make the virtual function in inherited class
    */
};

class CWHVIDEO:public CWH{
    float videoLength;
    public:
    CWHVIDEO(string s , float r , float vl) : CWH(s,r){
        videoLength=vl;
    }
    virtual void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
    }
};

class CWHTEXT: public CWH{
    int words;
    public:
    CWHTEXT(string s , float r , int wc) : CWH(s,r){
        words=wc;
    }
    virtual void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

// for CWH video
    title="Django tutorials";
    rating=4.54;
    vlen=3.79;
    CWHVIDEO djvideo(title, rating , vlen);
    // djvideo.display();

// for CWH TEXT
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHTEXT djtext(title, rating, words);
    // djtext.display();

    CWH *TUTS[2];
    TUTS[0]=&djvideo;
    TUTS[1]=&djtext;

    TUTS[0]->display();
    cout<<endl;
    TUTS[1]->display();
    return 0 ;
}
