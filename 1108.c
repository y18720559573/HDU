#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<b){
            int temp = a;
            a = b;
            b = temp;
        }
        int i;
        for(i = a; i > 0; i++){
            if(i%a == 0&&i%b == 0){
                printf("%d\n",i);
                break;
            }
        }
    }
}