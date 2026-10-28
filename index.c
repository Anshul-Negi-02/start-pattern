#include<stdio.h>
int main(){

    // int n = 5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // for(int i=4;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         printf("*"); 
    //     }
    //     printf("\n");
    // }
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=n-1;j>=i;j--){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=i;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int k=4;k>=i;k--){
    //         printf("*");

    //     }
    //     printf("\n");
    // }
    // int n=3;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=n-i-1;j++){
    //         printf(" ");
    //     }
    //     for(int k=1;k<=2*i+1;k++){
    //         printf("*");

    //     }
    //     printf("\n");
    // }
    // int n =3;
    // for(int i=n;i>=1;i--){
    //     for(int k=0;k<=n-i-1;k++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*i-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // int n=4;
    // for(int i=0;i<=n;i++){
    //     for(int k=0;k<=n-i;k++){
    //         printf(" ");
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=n-1;i>=0;i--){
    //     for(int j=0;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=0;k<2*i+1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(i==3||j==3){
              printf("* ");
          }
          else{
            printf("  ");
          }
        }
        printf("\n");
    }
    

}