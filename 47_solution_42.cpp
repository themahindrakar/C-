#include<iostream>
#include<cmath> 
using namespace std;
class simplecalaculator{
    int a,b;
public:
       void getdata1(){
           cout<<"Enter the value a "<<endl;
           cin>>a;
           cout<<"Enter the value b "<<endl;
           cin>>b;
       }
       void performoperations1(){
           cout<<"The value of a + b is : "<<a+b<<endl;
           cout<<"The value of a - b is : "<<a-b<<endl;
           cout<<"The value of a * b is : "<<a*b<<endl;
           cout<<"The value of a / b is : "<<(a/b)<<endl;
       }
};
class scientificcalaculator{
  int a,b;
public:
       void getdata2(){
           cout<<"Enter the value a "<<endl;
           cin>>a;
           cout<<"Enter the value b "<<endl;
           cin>>b;
       }
       void performoperations2(){
           cout<<"The value of cos(a) : "<<cos(a)<<endl;
           cout<<"The value of sin(a) is : "<<sin(a)<<endl;
           cout<<"The value of exp(a) is : "<<exp(a)<<endl;
           cout<<"The value of tan(a) is : "<<tan(a)<<endl;
       }
};
class hybridcalculator : public simplecalaculator,public scientificcalaculator{

};
int main(){
    // simplecalaculator calc;
    // calc.getdata();
    // calc.performoperations();
//    scientificcalaculator calc;
//    calc.getdata();
//    calc.performoperations2();
hybridcalculator calc;
calc.getdata2();
calc.performoperations2();
    
    return 0;
}