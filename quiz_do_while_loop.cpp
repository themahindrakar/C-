#include<iostream>

using namespace std;
int main() { 
int i=1,j;
int k;
cout<<"enter the value for j"<<endl;
cin>>j;
do
{
  k=j*i;
  i++;
  cout<<k<<endl;

}while(i<=10);
return 0;
}
