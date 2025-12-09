#include <stdio.h>
int main()
{
    int n1;
    float n4,n2;
    float n5 = 5.0;
    float n3;
    scanf("%d",&n1);
    printf("%d\n",n1-n1*5/100);
    scanf("%f",&n2);
    n2 += n1;
    printf("%.2f\n",n2-n2*(n5*3.0)/100);
    scanf("%f",&n3);
    n3 += n2;
    printf("%.2f\n",n3-n3*(n5*6.0)/100);
    return 0;
}
