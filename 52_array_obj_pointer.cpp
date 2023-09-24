#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
           void setdata(int a,float b){
               id=a;
               price=b;
           }
           void getdata(void){
               cout<<"code of this item is "<<id<<endl;
               cout<<"Price of this item is "<<price<<endl;
           }
};
int main(){
    int size=3;
    //int *ptr=&size;
    int p,i;
    float q;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrtemp=ptr;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the item and price "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }  
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    
    return 0;
}