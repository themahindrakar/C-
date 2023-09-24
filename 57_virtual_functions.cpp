#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
            string title;
            float rating;
    public:
          CWH(string s,float r){
              title=s; 
              rating=r;
          }
          virtual void display(){}
};
class CWHvideo:public CWH{
    float videolength;
    public:
          CWHvideo(string s,float r,float vl):CWH(s,r){
           videolength=vl;
          }
          void display(){
              cout<<"This amazing video with title "<<title<<endl;
              cout<<"Ratings : "<<rating<<" out of 5 star "<<endl;
              cout<<"Length of this video "<<videolength<<" minutes "<<endl;
          }
};
class CWHtext:public CWH{
    int words;
    public:
          CWHtext(string s,float r,int wc):CWH(s,r){
           words=wc;
          }
          void display(){
              cout<<"This amazing text tutorial with title "<<title<<endl;
              cout<<"Ratings of text : "<<rating<<" out of 5 star "<<endl;
              cout<<"No of words in this text "<<words<<" words "<<endl;
          }
};
int main(){ 
   string title= new char[30];
    float rating,vlen;
    int words;
    //for code with harry video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHvideo djvideo(title,rating,vlen);
    // djvideo.display();
    //for code with harry text
    title="Django tutorial text ";
    words=499;
    rating=4.19;
    CWHtext djtext(title,rating,words);
    // djtext.display();
    CWH * tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}