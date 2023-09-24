#include<iostream>
using namespace std;
class Y;
class Z;
class X{
    int a;
    friend int sum(int ,int,int);
    public:
          void setnum(int n)
          {
        
              a=n;
          }
          void printnum(){
              cout<<"the number is "<<a<<endl;
          }
};
class Y{
    int b;
     friend int sum(int ,int,int);
    public:
          void setnum_2(int m)
          {
              b=m;
          }
           void printnum(){
              cout<<"the number is "<<b<<endl;
          }
};
class Z{
    int c;
    public:
     friend int sum(int,int,int);
          void setnum_3(int o)
          {
              c=o;
          }
           void printnum(){
              cout<<"the number is "<<c<<endl;
          }
};
int sum(int s1,int s2,int s3){
    int s=s1+s2+s3;
    cout<<"sum is "<<s<<endl;
}
int main(){
    X a1;
    a1.setnum(33);
    a1.printnum();
   
    Y b1;
    b1.setnum_2(51);
    b1.printnum();
    Z c1;
    c1.setnum_3(49);
    c1.printnum();
    
    
    // sum(a1,b1,c1);
    return 0;
}