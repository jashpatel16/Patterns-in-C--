/*    1 2 3 4   
      1 2 3
      1 2
      1           */

#include<iostream>
using namespace std;
int main(){
    int i,j,a;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
        a = 1;
    for(j=1;j<=num-i+1;j++){
        cout<<a<<" ";
        a++;
    }
    cout<<endl;
}
}