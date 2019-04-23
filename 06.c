#include <stdio.h>
int main()
{
    double score[10];
    
    int i,a=0,b=0,c=0;
    
    
    for(i=0;i<=9;i++)
    {
        
        printf("請輸入第%d個成績：",i+1);
        scanf("%lf",&score[i]);
        
        
        
    }
    
    for (i=0; i<=9; i++)
    {
        if(score[i]>=0&&score[i]<=59.9)
        {
            
            c++;
            
        }
        if(score[i]>=60&&score[i]<=79.9)
        {
            b++;
            
        }
        if(score[i]>=80&&score[i]<=100)
        {
            a++;
            
        }
    }
    
    printf("A有%d位,B有%d位,C有%d位\n",a,b,c);
    
    
    
    
    
    return 0;
}
