#include <stdio.h>
#include <math.h>
int main()
{
    
    
    char ans;
    
    double a,b,c;
    double d,e,f;
    double s;
    double x,y,z;
    double t;
    double abc;
    
    
    printf("請輸入指令：");
    scanf("%c",&ans);
    
    if(ans=='D'||ans=='d')
    {
        
        printf("請輸入三邊長(以逗號隔開)：");
        scanf("%lf,%lf,%lf",&a,&b,&c);
        
        
        if((a>b&&b>c)||(a>c&&c>b))
        {
            
            printf("最大邊：%lf\n",a);
            
        }
        else if((b>a&&a>c)||(b>c&&c>a))
        {
            
            
            printf("最大邊：%lf\n",b);
            
        }
        else if((c>a&&a>b)||(c>b&&b>a))
        {
            
            printf("最大邊：%lf\n",c);
            
        }
        
    }
    if(ans=='H'||ans=='')
    {
        
        
        printf("請輸入三邊長(以逗號隔開)：");
        scanf("%lf,%lf,%lf",&a,&b,&c);
        
        d = a+b;
        e = a+c;
        f = b+c;
        
        
        if(d>c&&e>b&&f>a)
        {
            
            s = (a+b+c)/2;
            
            x = s-a;
            y = s-b;
            z = s-c;
            
            t = s*x*y*z;
            
            abc = sqrt(t);
            
            printf("面積為：%lf\n",abc);
            
        }
        else
        {
            
            printf("無法構成三角形\n");
            
        }
        
        
    }
    
    
    
    return 0;
}
