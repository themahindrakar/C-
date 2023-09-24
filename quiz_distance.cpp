#include<iostream>
#include<math.h>
using namespace std;
// class point{
//     int x,y;
//     public:
//           point(int a,int b ){
//               x=a;
//               y=b; 
//           }
//           void display(){
//               cout<<"the point is ("<<x<<", "<<y<<")"<<endl;
//           }
          
// };
class complex{
    int a,b;
    public:
           void setnumber(int n1,int n2){
               a=n1;
               b=n2;
           }
           friend complex sumcomplex(complex o1,complex o2);
           void printnumber(){
               cout<<"your number is "<<a<<" "<<b<<endl;
           }
           
};
complex sumcomplex(complex o1,complex o2){
               complex o3;
               o3.setnumber(sqrt(o1.a-o2.a),sqrt(o1.b-o2.b));
               return o3;
           }

int main(){
    complex c1,c2,sum;
    c1.setnumber(0,1);
    c1.printnumber();
    c2.setnumber(0,6);
    c2.printnumber();
    sum=sumcomplex(c1,c2);
    sum.printnumber(); 
    /*  p(3,4) - q(2,5)
        3-2  4-5 
        1^2   -1^2*/
    return 0;
}