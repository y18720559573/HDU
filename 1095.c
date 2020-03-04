#include<stdio.h>//for HDU 1095
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        //if there is no !=EOF,it will be time limited in HDOJ
        printf("%d\n\n",a+b);
    }
    return 0;
}