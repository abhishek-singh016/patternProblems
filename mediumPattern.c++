/*
        *
       ***
      *****
     *******
    *********

*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){

        // spaces
        for(int j=n;j>i;j--){
            cout<< " ";
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

int main(){
    int i;
    cin>>i;
    printPattern(i);
    return 0;
}