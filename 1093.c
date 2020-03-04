#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            int m;
            scanf("%d",&m);
            int a;
            int sum = 0;
            while(m--){
                scanf("%d",&a);
                sum+=a;
            }
            printf("%d\n",sum);
        }
    }
}