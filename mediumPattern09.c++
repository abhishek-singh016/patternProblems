/*
E
D E 
C D E 
B C D E
A B C D E

*/

#include<iostream>

using namespace std;

void printPattern(int n){
    for(int i=0;i<n;i++){
        char ch;
        for(ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    printPattern(n);
    return 0;
}