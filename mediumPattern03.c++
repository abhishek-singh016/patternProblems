/*

1      1
12    21
123  321
12344321

*/

#include<iostream>

using namespace std;

void printPattern1(int n){
    for(int i=1;i<=n;i++){

        //numbers

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // spaces

        for(int j=2*n;j>2*i;j--){
            cout<<" ";
        }

        // numbers

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        
       cout<<endl;
    }
 }


int main(){
    int n;
    cout<<"enter no. of row: ";
    cin>>n;

    printPattern1(n);
    // printPattern2(n);
    return 0;
}