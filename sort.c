#include<stdio.h>

int main(){
    int a[6] = {10,3,59,100,68,42};
    int i,j,temp=0;
    for(i=0; i<5;i++)
    {
        for(j=0; j<6-i; j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
            }
        }
    }
        for(i=0; i<6; i++){
            printf("%d ",a[i]);
        }
    return 0;
}