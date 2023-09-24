#include<iostream>
using namespace std;
class complex {
int a,b;
public:
complex(int ,int); // costructor declaration
void printnumber(){
    cout<<"your number is  "<<a<<" + "<<b<<"i"<<endl; 
}

};
complex :: complex(int x,int y){
    a=x;
    b=y;        
} 
int main(){
      int s,p;
    complex a(4,9); // implicit call
    a.printnumber();
    complex b=complex(4,7);
    b.printnumber();
    
  
    cout<<"enter the value for s,p";
    cin>>s>>p;
    complex c(s,p);
    c.printnumber();
    return 0;
}