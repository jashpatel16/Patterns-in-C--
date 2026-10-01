/*       * * * *         
         * * *
         * *
         *               */

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
    for(j=1;j<=num+1-i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
}