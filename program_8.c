// butterfly 
#include<stdio.h>
int n=5;
int main() {

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        for(int k=n;k>2*i-n;k--){
            printf("  ");      
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>=i;j--){
            printf("* ");
        }
        for(int k=1;k<=2*i;k++){
            printf("  ");

        }
        for(int j=n-1;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}