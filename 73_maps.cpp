#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> marksmap;
    marksmap["harry"]=98;
    marksmap["jack"]=59;
    marksmap["rohan"]=2;
    
    marksmap.insert({{"ambi",100},{"ram",99}});
    
    map<string,int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is : "<<marksmap.size()<<endl;
    cout<<"The max size is : "<<marksmap.max_size()<<endl;
    cout<<"The empty return value is : "<<marksmap.empty()<<endl;
    return 0;
}