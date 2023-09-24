#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
void swap(int a,int b){ //this will not work
    int temp=a;
    a=b;
    b=temp;
}
//call by reference
void swappointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by reference using c++ refernce variables
void swapReferencevar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp; 
}
//using referne variable
int & swapReferencevari(int &a,int &b){
    int temp =a;
    a=b;
    b=temp; 
    return a;
}
int main(){
    int a=4,b=7;
  //  cout<<"the sum of a and b is "<<sum(a,b);
 cout<<"the value of a "<<a<<" the value of b is "<<b<<endl;
//   // swap(a,b); this will not work beacause it only gets the opy of value of org values
//   //swappointer(&a,&b); //swap using pointer refernce 
// swapReferencevar(a,b); //swap using reference variables
//    //reference variable
swapReferencevari(a,b)=499;
 cout<<"the value of a "<<a<<" the value of b is "<<b<<endl;
    return 0;
}
