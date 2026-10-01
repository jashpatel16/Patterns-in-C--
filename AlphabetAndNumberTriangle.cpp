/*     1
       A B
       1 2 3
       A B C D
       1 2 3 4 5     */


#include<iostream>
using namespace std;
int main(){
    int i,j;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
        if(i%2==0){
        cout<<(char)(j+64)<<" ";
        }
        else{
            cout<<j<<" ";
        }
    }
    cout<<endl;
}
}