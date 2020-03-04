#include<stdio.h>
int main(){
    int n,m;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d",&m);
            int i;
            double sum = 0;
            for(i=1; i<=m; i++){
                if(i%2 == 0)
                sum-=1.0/i;
                else 
                sum+=1.0/i;
            }
            printf("%.2f\n",sum);
        }
    }
}