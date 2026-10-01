/*    ****
      ****  
      ****       */


      #include<iostream>
      using namespace std;
      int main(){
        int i,j;
        
        int m,n;
        cout<<"Enter no. of rows::";
        cin>>m;
        cout<<"Enter no. of columns::";
        cin>>n;

        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
      }
