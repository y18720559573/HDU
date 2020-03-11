#include<stdio.h>
#include<string.h>

int f(char str[400]){
    int i,add = 0;
    for(i = 0; str[i]!='\0'; i++){
        if(str[i]>='0'&&str[i]<='9')
        add++;
    }
    return add;
}

int main(){
    int n;
    char str[400];
    scanf("%d",&n);
    while(n--){
        getchar();//?:getchar放里面不能AC，放在while循环外面就能AC
        gets(str);
        printf("%d\n",f(str));
    }
}