/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/


#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    int start = 1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            start = 1;
        }else{
            start = 0;
        }


        for(int j=1;j<=i;j++){
            cout<< start<<" ";
            start = 1-start;
        }
        cout<<"\n";
    }

    return 0;
}