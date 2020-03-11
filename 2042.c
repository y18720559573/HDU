#include<stdio.h>
int f(int x){
    int i,sum = 3;
    for(i = 0; i < x; i++){
        sum=(sum-1)*2;
    }
    return sum;
}
int main(){
    int n,x;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        printf("%d\n",f(x));
    }
}
