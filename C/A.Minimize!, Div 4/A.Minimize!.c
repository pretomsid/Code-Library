#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    for(int i=0; i<t; t--)
    {
        scanf("%d %d",&a,&b);
        if(a<=b)
        {
            printf("%d\n",b-a);
        }
        else;
    }
    return 0;
}
