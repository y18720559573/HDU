/*
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",((n+1)*n)/2);
    }
    return 0;
}
HDU requires  the result will be in the range of 32-bit signed integer.
It means the result[((n+1)*n)/2] should in the range.but
I use it directly,so n*(n+1) may bigger than he limited.
And it also requires followed by a blank line ,but I only use a '\n',
in fact I need two '\n'.
followed is right code
*/
#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n%2==0)
        printf("%d\n\n",(n/2)*(n+1));
        else
        printf("%d\n\n",((n+1)/2)*n);
    }
    return 0;
}