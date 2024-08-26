/*
A
AB
ABC
ABCD
ABCDE

This pattern is majorly based on ASCII values like if we want to 
print the same pattern using outer loop to start from i = 1
then we must begin printing of pattern in inner loop from 
ASCII value less than of char 'A' which is of char '@' 
so in case of i = 1 if we put @ in the inner loop while comparing with 'A'
then we can acheive the result we want

*/


#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){

            cout<<ch;
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