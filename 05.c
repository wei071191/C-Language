#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double d;
    
    printf("輸入一元二次方程式的係數a,b,c(a,b,c用逗點隔開): ");
    
    scanf(" %lf, %lf, %lf",&a,&b,&c);
    
    
    d=b*b-4*a*c;
    
    if(d==0)
    {
        printf("方程式有相等實根:%lf\n",-b/(2*a));
    }
    if(d>0)
    {
        printf("方程式有兩異實根:%lf  , %lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }
    if(d<0)
    {
        printf("方程式無解\n");
    }
    
    return 0;
}
