/*
1
22
333
4444
55555
*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i;
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