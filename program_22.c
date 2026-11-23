#include<stdio.h>
int main(){
    int n=5;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int k=n;k>=i;k--){
            printf("  ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("%c ",ch+j);
        }
        printf("\n");
    }
    return 0;
}