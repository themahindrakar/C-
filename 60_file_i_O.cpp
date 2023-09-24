#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st ="harry bhai";
    string st2,st3;
    // opening file using constructor and writing it 
    // ofstream out("sample60.txt"); //write operation 
    // out<<st;  
     // opening file  using constructor and reading it 
    ifstream in("sample60b.txt"); //read operation 
   // in>>st2;
   getline(in,st2);   
   getline(in,st3);   
    cout<<st2<<st3; // it will print only one word
    return 0;
}