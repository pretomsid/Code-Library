#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    char S;
    scanf ("%d %c %d",&A,&S,&B);
    if(A>B && S=='>')
    {
        printf("Right");
    }
    else if(A<B && S=='<')
    {
        printf("Right");
    }
    else if(A==B && S=='=')
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}
