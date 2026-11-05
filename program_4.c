// hollow triangle 
#include<stdio.h>
int n=6;
int main() {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||i==n||j==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}