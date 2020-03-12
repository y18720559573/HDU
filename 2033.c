#include<stdio.h>
int main(){
    int n;
    int h1,m1,s1,h2,m2,s2;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
            if(s1+s2 < 60){
                if(m1+m2 < 60)
                printf("%d %d %d\n",h1+h2,m1+m2,s1+s2);
                else
                printf("%d %d %d\n",h1+h2+1,m1+m2-60,s1+s2);
            }
            else{
                if(m1+m2 < 59)
                printf("%d %d %d\n",h1+h2,m1+m2+1,s1+s2-60);
                else
                printf("%d %d %d\n",h1+h2+1,m1+m2-59,s1+s2-60);
            }
        }
    }
}