#include<iostream>
using namespace std;
class student{
protected:
         int rollno;
public:
      void set_roll_number(int);
      void get_roll_number(void);
      
};
void student :: set_roll_number(int r){
    rollno=r;
}
void student :: get_roll_number(){
    cout<<"the roll number is "<<rollno<<endl;
}

class exam : public student{
protected:
float  maths;
float physics;
public:
       void set_marks(float,float);
       void get_marks(void);
};
void exam :: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam :: get_marks(){
    cout<<"The marks obtained in maths are :"<<maths<<endl;
    cout<<"The marks obtained in physics are :"<<physics<<endl;
}
class result : public exam{
float percentage;
public:
       void display_result(){
           get_roll_number();
           get_marks();
           cout<<"your percentage is "<<(physics+maths)/2<<"%"<<endl;
       }

};

int main(){
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0,90.0);
    harry.display_result();


    return 0;
}