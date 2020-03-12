#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n == -1) break;
        else
        {
            if(n < 2)
            printf("%d\n",n);
            else
            {
            __int64 a,b,c;
            int i;
            a = 0,b = 1;
            for(i = 2; i <= n; i++)
            {
                c = a + b;
                a = b;
                b = c;
            }
            printf("%lld\n",c);
            }
        }
    }
}