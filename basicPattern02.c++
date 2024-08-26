/*
1
12
123
1234
12345

*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j;
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