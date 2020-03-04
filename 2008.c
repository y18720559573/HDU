#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)){
        if(n == 0) break;
        else
        {
            int i;
            float m;
            int minus = 0,plus = 0,zero=0;
            for(i=1; i<=n; i++){
                scanf("%f",&m);
                if(m == 0) //if take "==" with "=",minus, zero, plus will be all 0
                zero=zero+1;
                else if(m>0) 
                plus=plus+1;
                else if(m<0) 
                minus=minus+1;
            }
            printf("%d %d %d\n",minus,zero,plus);
        }
        
    } 
}