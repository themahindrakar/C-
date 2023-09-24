#include<iostream>
using namespace std;
// inline function
// inline int product(int a,int b){
//     return a*b;
//}
// static vaiable
 int product(int a,int b){
     static int c=0; // this only executes only once  
     c=c+1; //retained the value of c
    return a*b+c;
 }
 // default arguments
 float moneyrecived(int currentmoney,float factor=1.04){
     return currentmoney*factor;    
 }
int main(){
    int a,b;
    // cout<<"enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"if you have "<<money<<"  Rs in you bank a/c , you will recive "<<moneyrecived(money)<<" after a year ";
    cout<<"For vip: if you have "<<money<<"  Rs in you bank a/c , you will recive "<<moneyrecived(money,1.1)<<" after a year ";
    
    return 0;
}