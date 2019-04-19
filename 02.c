#include <stdio.h>
int main()
{
    
    char ans;
    double t;
    double a;
    
    printf("求以下常用金屬導體之任何溫度的電阻溫度係數：\n");
    printf("(1)銀    (2)鎢    (3)銅    (4)鎳\n");
    printf("(5)金    (6)鐵    (7)鋁    (8)鎳鉻合金\n");
    
    printf("請輸入金屬導體材料為：");
    scanf("%c",&ans);
    
    printf("請輸入導體溫度為：");
    scanf("%lf",&t);
    
    
    
    switch (ans) {
        case '1':
            a = (double)(1/(243+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '2':
            a = (double)(1/(202+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '3':
            a = (double)(1/(234.5+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '4':
            a = (double)(1/(147+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '5':
            a = (double)(1/(270+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '6':
            a = (double)(1/(180+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '7':
            a = (double)(1/(236+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        case '8':
            a = (double)(1/(6220+t));
            printf("此導體溫度為%lf時，電阻之溫度係數為%lf\n",t,a);
            break;
        default:
            break;
    }
    
    
    
    return 0;
}
