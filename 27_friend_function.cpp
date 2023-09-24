#include<iostream>
using namespace std;
// forward declaration
class complex; 
class calculator{
  public:
         int add(int a,int b){
             return a+b;
         }
         // individually declaring functions as friends
         int sumrealcomplex(complex , complex );
         int sumcompcomplex(complex,complex);
             
         
};
class complex{
    int a,b;
    friend int calculator :: sumrealcomplex(complex o1,complex o2);
    friend int calculator :: sumcompcomplex(complex o1, complex o2);
    // aliter : declaring entire calculator class as a friend
    //friend class calculator
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1, complex o2){
             return (o1.a+o2.a);
         }
 int calculator :: sumcompcomplex(complex o1,complex o2){
     return (o1.b+o2.b);
 }
int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(4,9);
    calculator calc;
   int result = calc.sumrealcomplex(o1,o2);
   cout<<"the sum of real part of o1 and o2 is "<<result<<endl;
   int result_1 = calc.sumcompcomplex(o1,o2);
   cout<<"the sum of complex part of o1 and o2 is "<<result_1<<endl;
    
    return 0;
}