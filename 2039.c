#include<stdio.h>
int main(){
    int n;
    double a,b,c;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%f %f %f",&a,&b,&c);
            if(a>=b&&a>=c){
                if(a<b+c)
                printf("YES\n");
                else
                printf("NO\n");
            }
            else if(b>=a&&b>=c){
                if(b<a+c)
                printf("YES\n");
                else
                printf("NO\n");
            }
            else if(c>=b&&c>=a){
                if(c<a+b)
                printf("YES\n");
                else
                printf("NO\n");
            }
        }
    }
}