#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int i,a;
        int product = 1;
        for(i=0;i<n;i++){
            scanf("%d",&a);
            if(a%2!=0)
            product = product*a;
        }
        printf("%d\n",product);
    }
}