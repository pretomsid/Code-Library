#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if(S=='+' && Q=='=')
    {
        if((A+B)==C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n",A+B);
        }
    }
    else if(S=='-' && Q=='=')
    {
        if((A-B)==C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n",A-B);
        }
    }
    else if(S=='*' && Q=='=')
    {
        if((A*B)==C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n",A*B);
        }
    }
    else;
    return 0;
}
