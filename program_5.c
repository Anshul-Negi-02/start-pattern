// hollow inverted triangle
#include<stdio.h>
int main() {
    int n=8;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
          if(j==n||i==1||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}