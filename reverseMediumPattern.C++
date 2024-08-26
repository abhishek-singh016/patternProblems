/*
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                * 

*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=n;i>=1;i--){

        // spaces
        for(int j=i;j<n;j++){
            cout<< " ";
        }

        //stars

        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }

        //spaces

        for(int j=i;j<n;j++){
            cout<< " ";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cin>>i;
    printPattern(i);
    return 0;
}