#include<stdio.h>
int main(){
    int n,b,c;
    char a;
    scanf("%d",&n);//HDOJ上如果出现TIME limted execeed，又可能是要将while循环去掉
        while(n--){
            getchar();
            scanf("%c %d %d",&a,&b,&c);
            if(a=='-')
                printf("%d\n",b-c);
            else if(a=='+')
                printf("%d\n",b+c);
            else if(a=='*')
                printf("%d\n",b*c);
            else{
                if(b%c==0)
                    printf("%d\n",b/c);
                else
                    printf("%.2f\n",(float)b/c);
            }
        }
}