#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<" using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<" using function with 3 arguments"<<endl;
    return a+b+c;
}
// calculate volume of cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}
//calculate the volume of a cube 
int volume(int a){
    return (a*a*a);
}
//rectangular box 
int volume(int l,int b,int h){
    return (l*b*h);
}
int main(){
    // cout<<" the sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<" the sum of 4,5 and 7 "<<sum(4,5,7)<<endl;    
cout<<"the volume of cuboid is "<<volume(3,7,6)<<endl;
cout<<"the volume of cylinder is "<<volume(3,6)<<endl;
cout<<"the volume of cube "<<volume(3)<<endl;

    return 0;
}