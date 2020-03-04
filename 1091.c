#include<stdio.h>//for HDU1091
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)){
        if(a==0&&b==0) break;
        else
        printf("%d\n",a+b);
    }
}