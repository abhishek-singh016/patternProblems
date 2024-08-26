/*
****
****
****
****
print this pattern
*/


#include<iostream>
#include<stdio.h>
using namespace std;

void recPattern(int n){
      for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int i;
    cout<<"enter the num of rows you want:  ";
    cin>>i;
    recPattern(i);
    return 0;
}