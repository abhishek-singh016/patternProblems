/*
         A
       A B A
     A B C B A 
   A B C D C B A 

*/


#include<iostream>

using namespace std;

void printPattern(int n){
    for(int i = 0;i<n;i++){
       
        //Spaces

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // Characters

        char ch = 'A';
        int breakpoint = (2*i+1)/2;
         for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j <= breakpoint){
                ch++;
            }else{
                ch--;
            }
        }

        // spaces

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
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