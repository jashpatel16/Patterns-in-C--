/*     A
       A B
       A B C
       A B C D       */


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
}
}