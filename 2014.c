#include<stdio.h>
int main(){
    int n;
    float marks[150];
    while(scanf("%d",&n)!=EOF){
        if(n<3||n>100) break;
        int i,j;
        float temp=0;
        for(i=0; i<n; i++)
            scanf("%f",&marks[i]);
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i; j++){
                if(marks[j]<marks[j+1]){
                    temp = marks[j];
                    marks[j] = marks[j+1];
                    marks[j+1] = temp;
                }
            }
        }
        float sum = 0;
        for ( i = 1; i < n-1; i++)
        {
            sum+=marks[i];
        }
        printf("%.2f\n",sum/(n-2));
    }
}