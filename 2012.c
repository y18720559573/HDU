#include<stdio.h>
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)){
        if(x == 0&&y == 0) break;
        else
        {
            int i,count1 = 0;
            for(i=x; i<=y; i++){
                int oj = i*i + i + 41;
                int a,count2=0;
                for(a=2; a<oj; a++){
                    if(oj%a != 0)//oj不能整除a
                    count2++;
                }
                if(count2 == oj - 2)//表明oj是素数的情况
                count1++;
            }
            if(count1 == y-x+1)
            printf("OK\n");
            else
            printf("Sorry\n");
        }
    }
}