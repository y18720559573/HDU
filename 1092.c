#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)){
        if(n==0) break;
        else
        {
            int a;
            int sum = 0;/*
            if put sum between line3 and line4,it will be wrong
            because it will add continuous,and plus previous result
            and this is local variable*/
            while(n--){
                scanf("%d",&a);
                sum+=a;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}