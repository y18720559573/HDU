/*for HDU 2000
the difficult is don't put in '\n'
Wednesday  March 4th*/
#include<stdio.h>
int main(){
    char ch1,ch2,ch3;
    while(scanf("%c%c%c",&ch1,&ch2,&ch3)!=EOF){
        getchar();//if there isn't getchar(),it will include'\n'
        if(ch1<ch2&&ch1<ch3){
            if(ch2<ch3)
            printf("%c %c %c\n",ch1,ch2,ch3);
            else
            printf("%c %c %c\n",ch1,ch3,ch2);
        }
        else if(ch2<ch1&&ch2<ch3){
            if(ch1<ch3)
            printf("%c %c %c\n",ch2,ch1,ch3);
            else
            printf("%c %c %c\n",ch2,ch3,ch1);
        }
        else if(ch3<ch1&&ch3<ch2)
        {
            if(ch1<ch2)
            printf("%c %c %c\n",ch3,ch1,ch2);
            else
            printf("%c %c %c\n",ch3,ch2,ch1);
        }
    }
}