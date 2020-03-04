/*#include<stdio.h>//for HDU 1096
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
            printf("%d\n\n",sum);
        }
    }
    return 0;
}
why above is wrong is that :a blank line should appear between the results,
and at the end ,there shouldnd have blank line either*/
#include<stdio.h>
int main(){
    int n,m;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d",&m);
            int i;
            int a;
            int sum = 0;
            for(i=1;i<=m;i++){
                scanf("%d",&a);
                sum+=a;
            }
            if(n>0)
                printf("%d\n\n",sum);
            else
                printf("%d\n",sum);
        }
    }
    return 0;
}