#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);

}
int main(){
   /* factiorial of a number:
    6!=6*5*4*3*2*1=720 
    0!=1
    1!=1 */
    /* step by step calculation of 4! 
    factorial(4)=4*factorial(3)
    factorial(4)=4*3*factorial(2)
    factorial(4)=4*3*2*factorial(1)
    factorial(4)=4*3*2*1
    factorial(4)=24 */ 
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    // cout<<"the factorial of num "<<num<<" is "<<factorial(num)<<endl;
    cout<<"the fibonacci sequence  of number "<<num<<" is "<<fib(num)<<endl;
    return 0;
}