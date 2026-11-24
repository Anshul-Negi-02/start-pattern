#include<stdio.h>
int main(){
    int i,j,k,n=4;
    for(i=n;i>=1;i--){
        for(k=n;k>i;k--)
            printf("  ");
            for(j=1;j<=2*i-1;j++){
                if(j==1 || j==2*i-1 || i==n)
                printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}