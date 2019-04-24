#include <stdio.h>
int main()
{
    
    int year;
    
    printf("請輸入年份：");
    scanf("%d",&year);
    
    if((year%4==0&&year%100!=0)||(year%400==0&&year%4000!=0))
    {
        
        
        printf("%d 為閏年\n",year);
        
    }
    else
    {
        
        printf("%d 不為閏年\n",year);
        
    }
    
    
    return 0;
}
