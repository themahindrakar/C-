#include<iostream>
using namespace std;
int sum(int a,int b);
void g();
//acceptable int sum(int ,int)
// unacceptable int sum(inta,b)
int main(){
    int num1,num2;
    cout<<"enter the first number "<<endl;
    cin>>num1; // acual parameters -> values that are passed to function
    cout<<"enter the second number "<<endl;
    cin>>num2; // actual parameters
    cout<<"the sum of two number is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    //formal parameters a and b are taking values from actual paramerters
    return c;
}
void g(){
    cout<<"good night"<<endl;
}