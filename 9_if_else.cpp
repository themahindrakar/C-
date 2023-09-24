#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter the age "<<endl;
    cin>>age;
    if(age>18){
        cout<<"you can not drive "<<endl;
    }
    else if(age==18){
        cout<<"you can drive if you have license"<<endl;
    }
    else{
        cout<<"you can not drive";
    }
    return 0;
}