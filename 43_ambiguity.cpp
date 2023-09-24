#include<iostream>
using namespace std;
class base1{
     public:
            void greet(){
                cout<<"how are you? "<<endl;
            }

};
class base2{
     public:
            void greet(){
                cout<<"kaise ho ?"<<endl;
            }

};
class derived : public base1, public base2{
int a;
public:
void greet(){
    base2::greet();
}

};
class b{
    public:
     void say(){
         cout<<"Hello World";
     }

};
class d: public b{
    int a;
    // public:
    // void say(){
    //     cout<<"Hello AK ";
    // }

};
int main(){
    // ambiguity1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();
    //ambiguity 2
    b a;
    a.say();
    d c;
    c.say();
    
    return 0;
}