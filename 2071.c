#include<stdio.h>
int main(){
    int n,m;
    float h[200];
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d",&m);
            int i;
            for(i = 0; i < m; i++){
                scanf("%f",&h[i]);
            }
            float max = 0;
            for ( i = 0; i < m ;i++)
            {
                if (h[i] > max)
                {
                    max = h[i];
                }
            }
            
            printf("%.2f\n",max);
        }
    }
}