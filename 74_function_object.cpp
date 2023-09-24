#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    /* Function object (functor): Function wrapped in a class so
     that it is avaliable like an object */
     int arr[]={1,83,4,12,94,77};
     sort(arr,arr+6);
     sort(arr,arr+6,greater<int> ());
     for(int i=0;i<6;i++){
         cout<<arr[i]<<endl;
     }
    return 0;
}