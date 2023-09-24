#include<iostream>
using namespace std;

int main(){
    int marks[4]={49,78,92,38};
    int* p=marks;
    for(int i=0;i<=3;i++){
        cout<<"the value of marks "<<i<<" is "<<*(p+i)<<endl;
    }
    /*  pointer and arrays
    int *p=marks;
    cout<<*(p++)<<endl;
    cout<<*(p); */
    return 0;
}