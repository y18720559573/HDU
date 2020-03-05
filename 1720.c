#include<stdio.h>
int main(){
    int a,b;//输入16进制的数字
    while(scanf("%x %x",&a,&b)!=EOF){
        printf("%d\n",a+b);//输出10进制的数字
    }
}