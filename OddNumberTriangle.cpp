/*    1
      1 3
      1 3 5
      1 3 5 7        */


#include<iostream>
using namespace std;
int main(){
    int i,j,a;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
        a = 1;
    for(j=1;j<=i;j++){
        cout<<a<<" ";
        a+=2;
    }
    cout<<endl;
}
}