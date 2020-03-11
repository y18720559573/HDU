#include<stdio.h>
#include<string.h>
int main(){
    char x;
    int y,n,i;
    scanf("%d",&n);
    while(n--){
        getchar();
        scanf("%c %d",&x,&y);
        if(x<='z'&&x>='a')
        i = 'a' - x - 1;
        if(x<='Z'&&x>='A')
        i = x - 'A' + 1;
        printf("%d\n",y+i);
    }
}