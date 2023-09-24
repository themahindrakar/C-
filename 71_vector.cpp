#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector<t> & v){
    cout<<"Displaying this vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
      //  cout<<v.at(i)<<" ";
    }
    cout<<endl;
    

}
int main(){
    // ways to create vector 
    vector<int> vec1; // zero length integer vector 
    vector<char> vec2(4); // 4 vec char element
    // 6 element vector of 3s
    // vec2.push_back('5');
    // display(vec2);   
    vector<char> vec3(vec2);
    display(vec3);
    vector<int> vec4(5,13);
    display(vec4);
    cout<<vec4.size();
    int element,size;
    // cout<<"Enter the size of vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add this vetor ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
   // vec1.pop_back();
//    display(vec1);
//    vector<int> :: iterator iter = vec1.begin();
// //    vec1.insert(iter,49); // insert value at begining
// // vec1.insert(iter+1,49); // value after first element 
// vec1.insert(iter,49); // multiple times 
//     display(vec1);
    
    return 0;
}