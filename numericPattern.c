#include<stdio.h>

int main(){
    int n,k=1;


    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int space=0;space<n-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){

            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}