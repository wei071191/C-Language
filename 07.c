#include <stdio.h>
int main()
{
    
    int money;
    int cost;
    int ori;
    int a,b,c,d,e,f;
    
    printf("應付金額：");
    scanf("%d",&cost);
    printf("實付金額：");
    scanf("%d",&ori);
    
    
   
    if(ori<cost)
    {
        
        money = cost-ori;
        
        printf("金額不足，缺%d元\n",money);
        
        
    }
    else
    {
        
        money = ori-cost;
        
        a = money/500;
        b = (money-a*500)/100;
        c = (money-a*500-b*100)/50;
        d = (money-a*500-b*100-c*50)/10;
        e = (money-a*500-b*100-c*50-d*10)/5;
        f = (money-a*500-b*100-c*50-d*10-e*5);
        
        printf("$500：%d\n$100：%d\n $50：%d\n $10：%d\n  $5：%d\n  $1：%d\n",a,b,c,d,e,f);
        
    }
    
    
   
    
    
    return 0;
}
