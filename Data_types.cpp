#include<iostream>
using namespace std;
int glo=9;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int x=33;
    int y=51;
    float pi=3.14;
    char z='A';
    int glo=33;
    
    bool m=true;
    bool r=false;
    /* in bool true = 1 and false = 0*/
    sum();
    cout<<glo<<m;
    cout<<"\n"<<glo<<r;
    // cout<<"the value of x is "<<x<<" \nthe value of y is "<<y<<" \nthe addition of x+y is "<<x+y;
    // cout<<"\nthe value of pi is "<<pi;
    // cout<<"\nthe value of z is "<<z;
    return 0;
}