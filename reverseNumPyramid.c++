/*
12345
1234
123
12
1

*/

#include<iostream>
#include<stdio.h>
using namespace std;

void printPattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<< j<< " ";
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