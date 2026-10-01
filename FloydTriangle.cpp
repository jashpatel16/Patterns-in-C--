/*     1
       2 3
       4 5 6
       7 8 9 10     */


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int num;
    int a=1;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a+=1;
        }cout<<endl;
    }
}