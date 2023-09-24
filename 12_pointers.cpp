#include<iostream>
using namespace std;

int main(){
    int a=9;
    int* b=&a;
    /* &--> address of operator*/ 
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;

    /* *-->(Value at) dereference operator  */
    cout<<"the value at address b is "<<*b<<endl;
    return 0;
}