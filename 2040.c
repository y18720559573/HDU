#include<stdio.h>
int f(int x){
    int sum=0;
    int i;
    for(i = 1; i < x; i++){
        if(x%i == 0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    int a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a == f(b)||b == f(a))
        printf("YES\n");
        else
        printf("NO\n");
    }
}