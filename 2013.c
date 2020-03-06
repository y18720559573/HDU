#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int i,add=1;
        for(i=1; i<n; i++){
            add = 2*(add+1);
        }
        printf("%d\n",add);
    }
}