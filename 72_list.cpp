#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int>:: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
    
}

int main(){
    list<int> list1;// list of o length
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(6);
    list1.push_back(49);

//    display(list1);
   // removing from the list 
//    list1.pop_back();
//    list1.pop_front();
 //   list1.remove(9);
// sorting the list 
// display(list1);
// list1.sort();
// cout<<"after sorting "<<endl;
//     display(list1);
    
    list<int> list2(3);// empty list of size 7 
    list<int>:: iterator iter;
    iter =list2.begin();
    *iter=45;
    iter++;
    *iter=49;
    iter++;
    *iter=99;
    iter++;
    // display(list2);
    // sorting and mergeing
    // list1.sort();
    // list2.sort();
    // // mergeing list 1 and 2
    // list1.merge(list2);
    // cout<<"after mergring "<<endl;
    // display(list1);
    // Reversing list
    display(list1);
    list1.reverse();
    cout<<" after reversing list 1 : ";
    display(list1);
    return 0;
}