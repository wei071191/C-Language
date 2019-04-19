#include <stdio.h>
int main()
{
    
    int a,b,c;
    
    int aa,bb,cc;
    
    printf("請輸入三邊長：");
    
    scanf("%d %d %d",&a,&b,&c);
    
    aa = a*a;
    bb = b*b;
    cc = c*c;
    
    if(aa+bb==cc)
    {
        
        printf("直角三角形\n");
        
    }
    else if(aa+bb<cc)
    {
        
        printf("鈍角三角形\n");
        
    }
    else if(aa+bb>cc||aa+cc>bb||bb+cc>aa)
    {
        
        
        printf("銳角三角形\n");
        
    }
        
    
    
    
    
    return 0;
}
