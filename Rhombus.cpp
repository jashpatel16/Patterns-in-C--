/*         * * * *         
         * * * *
       * * * *
     * * * *           */


#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int num;
    cout<<"Enter a number::";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i+1;j++){
            cout<<"  ";
        }{
            for(k=1;k<=num;k++){
                cout<<"* ";
            }cout<<endl;
        }
    }
}