#include<iostream>
using namespace std;
class base1 {
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }

};
class base2 {
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b;
    }

};
class derived : public base1, public base2{
public:
void show(){
    cout<<"The value of base1 "<<base1int<<endl;
    cout<<"The value of base2 "<<base2int<<endl;
    cout<<"The sum of base1 and base2 is  "<<base1int+base2int<<endl;
}
};
int main(){
    derived harry;
    harry.set_base1int(33);
    harry.set_base2int(51);
    harry.show();
    
    return 0;
}