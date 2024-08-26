/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    ********** 

*/

#include<iostream>

using namespace std;

void printPattern1(int n){
    for(int i=1;i<=n;i++){
        //stars
        for(int j=n;j>=i;j--){
            cout<<"*";
        }

        // spaces

        for(int j=2;j<2*i;j++){
            cout<<" ";
        }

        //stars

        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;

    }
}

void printPattern2(int n){
    for(int i=1;i<=n;i++){
        
        //stars

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        // spaces

        for(int j=2*n;j>2*i;j--){
            cout<<" ";
        }

        // stars

        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no. of row: ";
    cin>>n;
    printPattern1(n);
    printPattern2(n);
    return 0;
}