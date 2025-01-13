#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n/10;
    b=n%10;

    if(n==10 || n==20 || n==30 || n==40 || n==50 || n==60 || n==70 || n==80 || n==90)
    {
        printf("YES\n");
    }

    else if(a%b==0 || b%a==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
