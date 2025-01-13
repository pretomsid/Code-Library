#include <stdio.h>
/*#include <cmath.h> *///for complex number
#include <math.h> //for floating point number
int main()/*
{
    float a,b,c,result,ceil,round;
    scanf("%f %f",&a,&b);
    result = a/b;
    int floor = result;
    printf("floor %0.f / %0.f = %d\n",a,b,floor);
    c= result*100;
    int d = c;
    int e = d%100;
    round = result;
    if(e<50){
        printf("round %0.f / %0.f = %0.f\n",a,b,round);
    }
    else if(e>=50 && e<=100){
        printf("round %0.f / %0.f = %0.f\n",a,b,round+1);
    }
    return 0;
}*/
{
    float a,b,res;
    scanf("%f %f",&a,&b);
    res = a/b;
    printf("floor %0.f / %0.f = %0.f\n",a,b,floor(res));
    printf("ceil %0.f / %0.f = %0.f\n",a,b,ceil(res));
    printf("round %0.f / %0.f = %0.f\n",a,b,round(res));
    return 0;
}
