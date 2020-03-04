/*for HDU1090
at 2020.3.3  Tues*/
#include<stdio.h>
int main(){
    int n;
    int a,b;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d%d",&a,&b);
            printf("%d\n",a+b);
        }
    }
    return 0;
}