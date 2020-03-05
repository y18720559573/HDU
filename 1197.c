#include<stdio.h>
int main(){
    int i;
    int a,b,c,d,sum;
    for(i=2992; i<10000; i++){
        a = i/1000;
        b = (i/100)%10;
        c = (i%100)/10;
        d = i%10;
        sum=a+b+c+d;
        int sum1 = i/1728 + (i/144)%12 + (i%144)/12 + i%12;
        int sum2;
        if(i>=4096)
        sum2 = i/4096 + (i/256)%16 + (i%256)/16 + i%16;
        else
        {
            sum2 = (i/256)%16 + (i%256)/16 + i%16;
        }
        if(sum == sum1&&sum == sum2)
        printf("%d\n",i);
    }
}
