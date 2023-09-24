#include<iostream>

using namespace std;
int main(){
    int a=4,b=5;
    cout<<"\n the value of a+b :  "<<a+b;
    cout<<"\n the value of a-b :  "<<a-b;
    cout<<"\n the value of a*b :  "<<a*b;   
    cout<<"\n the value of a/b :  "<<a/b;
    cout<<"\n the value of a%b :  "<<a%b;
    cout<<"\n the value of a++ :  "<<a++;  
    cout<<"\n the value of a-- :  "<<a--;
    cout<<"\n the value of ++a :  "<<++a;
    cout<<endl;
    // comparison operator
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<endl;
    // logical operator 
    cout<<"the value of and operator ((a==b) && (a<b)) is  "<<((a==b) && (a<b))<<endl;
    cout<<"the value of or operator ((a==b) || (a<b)) is  "<<((a==b) || (a<b))<<endl;
    cout<<"the value of not operator(!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}