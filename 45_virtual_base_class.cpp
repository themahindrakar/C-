#include<iostream>
using namespace std;
  
class student{
     protected:
     int roll_no;
     public:
     void set_number(int a){ 
     roll_no=a;
     }
     void print_number(void){
         cout<<"your roll no is "<<roll_no<<endl;
     }
};
class test: virtual public student{
    protected:
    float maths,physics;
    public:
          void set_marks(float m1,float m2){
              maths=m1;
              physics=m2;
          }
          void print_marks(void){
          cout<<"Your result is here : "<<endl
               <<"maths : "<<maths<<endl
               <<"physics : "<<physics<<endl;
          }
};

class sport: virtual public student{
    protected:
    float score;
    public:
           void set_score(float sc){
               score=sc;
           }
           void print_score(void){
               cout<<"your score is "<<score<<endl;
           }
};
class result: public test,public sport{
    private:
            float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main(){
result harry;
harry.set_number(9);
harry.set_marks(49.9,51.4);
harry.set_score(8);
harry.display();


    
    return 0;
}