#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public: 
        //    test(int i,int j):a(i),b(j)
       // test(int i,int j):a(i),b(i+j)
       //test(int i,int j):b(j),a(i+b) error because of order of declaration in class 
      //  test(int i,int j):a(i),b(a*j)
      test(int i,int j):a(i)
           {
               b=j;
               cout<<"constructor executed "<<endl;
               cout<<"The value of a is "<<a<<endl;
               cout<<"The value of b is "<<b<<endl;
           }
};
int main(){
    test t(4,6);


    return 0;
}