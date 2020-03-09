#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    int n;
    char str[200];
    scanf("%d", &n);
    while (n--){

            getchar();
            gets(str);
            int a = strlen(str);
            int i;
            int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
            for (i = 0; i < a; i++)
            {
                if (str[i] == 'a')
                    num1 += 1;
                if (str[i] == 'e')
                    num2 += 1;
                if (str[i] == 'i')
                    num3 += 1;
                if (str[i] == 'o')
                    num4 += 1;
                if (str[i] == 'u')
                    num5 += 1;
            }
            printf("a:%d\n",num1);
            printf("e:%d\n",num2);
            printf("i:%d\n",num3);
            printf("o:%d\n",num4);
            printf("u:%d\n",num5);
            if(n>0) printf("\n");
    }
}