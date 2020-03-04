#include<stdio.h>//for HDU1094
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int a;
        int sum = 0;
        while(n--){
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}