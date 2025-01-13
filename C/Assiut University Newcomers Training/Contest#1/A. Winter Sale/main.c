#include <stdio.h>
#include <stdlib.h>

int main()
{
    //r-real price,p-discounted price,x-discount
    float r,p,x;
    scanf("%f %f",&x,&p);
    r=p/(1-(x/100));
    printf("%.2f\n",r);
    return 0;
}
