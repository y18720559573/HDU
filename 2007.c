#include<stdio.h>
int main(){
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF){
        int i;
        int two=0,one=0;
        if(m>n){
            int t;
            t=m,m=n,n=t;
        }//fucking
        for(i=m; i<=n; i++){
            if(i%2 == 0)
            two+=i*i;
            else
            one+=i*i*i;
        }
        printf("%d %d\n",two,one);
    }
}