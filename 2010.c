#include<stdio.h>
int main(){
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        int a,b,c;
        int i,sum,count=0;
        for(i=m; i<=n; i++){
            a = i/100;
            b = (i/10)%10;
            c = i%10;
            sum = a*a*a+b*b*b+c*c*c;
            if(sum == i){
                if(count>0)
                    printf(" %d",i);
                else
                    printf("%d",i);
                count++;
            }
        }
        if(count == 0)
            printf("no\n");
        else
            printf("\n");
    }
}