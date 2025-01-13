#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    scanf("%f",&n);
    if(n%n==0)
    {
        printf("int %d %f",n,n);
    }
    else if(n%int(n)!=0)
    {
        printf("float %d %f",n,n);
    }
    return 0;
}
