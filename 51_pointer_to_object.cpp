#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
          void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
          }
          void setdata(int a,int b){
              real=a;
              imaginary=b;
          }
};
int main(){
    // complex c1;
    // complex *ptr=&c1;
    // complex *ptr=new complex;
    // // (*ptr).setdata(1,49);
    // ptr->setdata(1,49);
    // (*ptr).getdata();
    //array of objects 
    complex *ptr=new complex[4];
    ptr->setdata(1,4);
    ptr->getdata();
    return 0;
}