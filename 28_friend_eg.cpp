#include<iostream>
using namespace std;
class C2;
class C1{
    int val;
    friend void exchange(C1&,C2&);
    public:
        void indata(int a){
            val=a;
        }
        void display(void){
         cout<<val<<endl;
        }
};
class C2{
    int val_2;
    friend void exchange(C1&,C2&);
    public:
        void indata(int a){
            val_2=a;
        }
        void display(void){
         cout<<val_2<<endl;
        }
};
void exchange(C1 &x,C2 &y){
    int temp=x.val;
    x.val=y.val_2;
    y.val_2=temp;   
    
}
int main(){
    C1 oc1;
    C2 oc2;
    oc1.indata(33);
    oc2.indata(51);
    exchange(oc1,oc2);
    cout<<"the value c1 after swap is ";
    oc1.display();
    cout<<"the vaalue c2 after swap is ";
    oc2.display();
    return 0;
}