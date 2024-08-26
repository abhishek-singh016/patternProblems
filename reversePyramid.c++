/*
*****
****
***
**
*

*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<< "*";
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