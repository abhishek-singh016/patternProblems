/*

*
**
***
****
*****
****
***
**
*

*/


#include<iostream>

using namespace std;

void first_half(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void second_half(int n){
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    first_half(n);
    second_half(n);
    
    return 0;
}