#include <stdio.h>
int main()
{
    
    int h;
    int a;
    double t;
    
    printf("請輸入工作的時數：");
    scanf("%d",&h);
    
    if(h<=60)
    {
        
        t = h*75;
        
        printf("薪資為：%lf\n",t);
        
    }
    else if(h>=61&&h<=75)
    {
        
        a = h%60;
        
        t = (double)(60*75+a*75*1.25);
        
        printf("薪資為：%lf\n",t);
        
        
        
        
    }
    else if(h>=76)
    {
        
        a = h%75;
        t = (double)(60*75+15*75*1.25+a*75*1.75);
        printf("薪資為：%lf\n",t);
    }
    
    
    
    
    
    return 0;
}
