/*            *
            * *  
          * * *
        * * * *       */
       
        
#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int num;
    cout<<"Enter a number:";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
                cout<<"  ";}
                for(k=1;k<=i;k++){
                    cout<<"* ";
                }
            
            cout<<endl;
        }
    }
