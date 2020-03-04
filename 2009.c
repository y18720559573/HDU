#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF){
        float sum = 0;
        float a = n;
        for(int i=1; i<m; i++){
            a = sqrt(a);
            sum+=a;
        }
        printf("%.2f\n",sum+n);
    }
}