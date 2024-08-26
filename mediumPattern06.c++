/*
ABCDE
ABCD
ABC
AB
A
*/


#include<iostream>

using namespace std;

void printPattern(int n){
    for(int i = n;i>0;i--){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printPattern(n);

    return 0;
}