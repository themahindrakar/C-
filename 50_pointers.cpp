#include<iostream>
using namespace std;

int main(){
    // basic pointers 
    int a=9;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The value of a is "<<(ptr)<<endl;
    // new keyword 
    int* p=new int(4);
    cout<<"The value of b is "<<*(p)<<endl;
    int *arr=new int[3];
    arr[0]=49;
    // arr[1]=51;
    *(arr+1)=51;
    arr[2]=33;
    // delete[] arr;
    cout<<"The value at arr[0] is "<<arr[0]<<endl;
    cout<<"The value at arr[1] is "<<arr[1]<<endl;
    cout<<"The value at arr[2] is "<<arr[2]<<endl;
    return 0;
}