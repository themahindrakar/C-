#include<iostream>
using namespace std;

int main(){
    int marks[4]={99,19,74,16};
    /* for while loop[ use i=1 */
   // int i=1;
    // using while 
    // while(i<=4){
    //     cout<<"the marks "<<i<<" i "<<marks[i]<<endl;
    //     i++;
    // }
    // // using do while
    int i=0;
    do{
         cout<<"the marks "<<i<<" i "<<marks[i]<<endl;
        i++;
    }while(i<=3);
    return 0;
}