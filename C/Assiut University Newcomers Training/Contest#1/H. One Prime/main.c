#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    if(x>=2)
    {
        if(x%x==0 && x%2!=0 && x%(2*n+1)!=0 && x%1==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else;
    return 0;
}
