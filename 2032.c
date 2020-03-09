#include<stdio.h>
int main(){
    int n;
    int a[150][150] = {0};
    a[0][0]=1;
    while(scanf("%d",&n)!=EOF){
        int i,j;
        for(i=1; i<=n; i++){
            for(j=1;j<=i;j++){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                if(j<i){
                    printf("%d ",a[i][j]);
                }
                if(j==i)
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n"); 
    }
}