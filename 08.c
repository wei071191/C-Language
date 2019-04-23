#include <stdio.h>
int main()
{
    
    double a=0,b=0,c=0;
    
    char operator;
    
    printf("請輸入一個算式：");
    scanf("%lf%c%lf",&a,&operator,&b);
    
    switch (operator) {
        case '+':
            c = a+b;
            printf("%lf%c%lf=%lf\n",a,operator,b,c);
            break;
        case '-':
            c = a-b;
            printf("%lf%c%lf=%lf\n",a,operator,b,c);
            break;
        case '*':
            c = a*b;
            printf("%lf%c%lf=%lf\n",a,operator,b,c);
            break;
        case '/':
            c = a/b;
            printf("%lf%c%lf=%lf\n",a,operator,b,c);
            break;
        default:
            printf("請輸入正確的運算式\n");
            break;
    }
    
    
    
    
    return 0;
}
