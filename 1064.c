#include<stdio.h>
int main(){
    float a,b;
    while(scanf("%f",&a)!=EOF){
        int i;
        float sum=a;
        for(i=1;i<12;i++){
            scanf("%f",&b);
            sum+=b;
        }
        printf("$%.2f\n",sum/12);
    }
    return 0;
}