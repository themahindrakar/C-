#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<=33;i++){
    //     cout<<i<<endl;
    //     if(i==9){
    //         break;
    //     }
    // }
    for(int i=0;i<=33;i++){
        
        if(i==9){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}