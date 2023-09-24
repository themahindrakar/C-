#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string S){
    for(int i=0;i<S.size()/2;i++){ 
     if(S[i]==S[S.size()-i-1]){
         return "Yes";
          }
      
    }
    return "No";
}
int main()
{
    string S = "ABCDCBA";
    cout<<isPalindrome(S);
    return 0;

}