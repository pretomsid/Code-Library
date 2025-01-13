#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//103 test case passed...hell yeaaahhh!
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(b*log(a)>d*log(c))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
