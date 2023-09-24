#include<iostream>
using namespace std;
typedef struct student
{
    int sid;
    int rollno;
    char favchar;
    float per;
}st;
union car{
   int price;
   char logo;
   float avg;
};
int main(){
    // st abhi;
    // abhi.sid=1101014;
    // abhi.rollno=1;
    // abhi.favchar='A';
    // abhi.per=8.64;
    // cout<<"the value is "<<abhi.sid<<endl;
    // cout<<"the value is "<<abhi.rollno<<endl;
    // cout<<"the value is "<<abhi.favchar<<endl;
    // cout<<"the value is "<<abhi.per<<endl;

/* union :in union one time you can print only one value 
otherwise it will print garbage value */
// union car a;
// a.price=6000000;
// a.logo='v';
// a.avg=19.03;
// cout<<a.price<<endl;
// cout<<a.logo<<endl;
// cout<<a.avg<<endl;
/* enums it is used to show index for readablity of program */
enum good{morning, evening , night};
cout<<morning;
good g1=evening;
cout<<g1;
cout<<( g1==2);

    return 0;
}