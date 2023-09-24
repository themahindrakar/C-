#include<iostream>
using namespace std;
class employee{
public:
int id;
float salary;
       employee(int inpid){
        id=inpid;
        salary=49.0;
       }
       employee(){}
};
class programmer:employee{

    public:
    int langauagecode=9;
    programmer(int inpid){
      id=inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee harry(1),ram(2);
    cout<<harry.salary<<endl;
    cout<<ram.salary<<endl;
    programmer skillf(10);
    cout<<skillf.langauagecode<<endl;
    skillf.getdata();
    return 0;
}