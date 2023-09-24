#include<iostream>
using namespace std;
template<class t>
class harry {
    public:
    t data;
    harry(t a){
        data=a;

    }
    // void display(){
    //     cout<<data; normal way 
    // }
    void display();
};
template <class t>
void harry<t>:: display(){
    cout<<data;
}
void func(int a){
    cout<<"i am first func() "<<a<<endl;
}
template <class t>
void func(t a){
    cout<<"This is temolatised func() "<<a<<endl;
}

template <class t>
void func1(t a){
    cout<<"This is templatised func() "<<a<<endl;
}
int main(){
    // harry <float> h(7.9);
    // // cout<<h.data;
    // h.display();
//    func(4);
func1(9);
    return 0;
} 