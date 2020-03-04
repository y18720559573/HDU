/*当定义了一个float型变量时，则scanf中的“应为%lf”
#include<stdio.h>
#include<math.h>
int main(){
    float a;
    while(scanf("%f",&a)!=EOF){
        printf("%.2f\n",fabs(a));
    }
}
*/
#include<stdio.h>
#include<math.h>
int main(){
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.2f\n",fabs(a));
    }
}