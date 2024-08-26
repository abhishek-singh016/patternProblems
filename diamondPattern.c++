/*
                *
              * * *
            * * * * * 
          * * * * * * *
        * * * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                * 

*/


#include<iostream>

using namespace std;

void pyramid(int n){
     for(int i=1;i<=n;i++){
        //spaces
        for(int j=n;j>i;j--){
            cout<<" ";
        }

        //stars

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }

        //spaces

         for(int j=n;j>i;j--){
            cout<<" ";
        }
    cout<<endl;
}
}
void reversePyramid(int n){
    for(int i=n;i>=1;i--){

        //spaces

         for(int j=i;j<n;j++){
            cout<<" ";
        }

        //stars

        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }

        //spaces

        for(int j=i;j<i;j++){
            cout<<" ";
        }


        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;
    pyramid(n);
    reversePyramid(n);
    return 0;
}