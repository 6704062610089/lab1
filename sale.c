#include <stdio.h>
int main()
{
    float n1;
    float n4,n2;
    float n5 = 5.0;
    float n3;
    scanf("%f",&n1);
    n1 = n1-n1*0.05;
    printf("%.2f ",n1);
    n1 = n1+n1*0.07;
    printf("%.2f\n",n1);
    scanf("%f",&n2);
    n2 += n1;
    n2 = n2-n2*0.15;;
    printf("%.2f ",n2);
    n2 = n2+n2*0.07;
    printf("%.2f\n",n2);
    scanf("%f",&n3);
    n3 += n2;
    n3 = n3-n5*0.3;
    printf("%.2f ",n3);
    n3 = n3+n3*0.07;
    printf("%.2f\n",n3);
    return 0;
}
