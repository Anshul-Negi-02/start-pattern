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