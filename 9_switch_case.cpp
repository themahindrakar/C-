#include<iostream>
using namespace std;
int main() {  
int age;
cout<<"enter the age ";
cin>>age;

switch (age)
{
case 10:
    cout<<"under age "<<endl;
    break;
case 18:
    cout<<"right age"<<endl;
    break;
case 80:
    cout<<"over age "<<endl;
    break;

default:
cout<<"no special choice "<<endl;
    break;
}
return 0;
}
