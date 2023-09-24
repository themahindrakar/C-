#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt"); 
    out<<"This is me ";
    out<<" This is also me";
    out.close();
    ifstream in;
    string st,st2;
    in.open("sample60b.txt");
//     in>>st>>st2;
//    // getline(in,st);

//     cout<<st<<st2;
   while(in.eof()==0){ // eof = end of file 
     getline(in,st);
     cout<<st<<endl;
   }
    in.close();
    return 0;
}