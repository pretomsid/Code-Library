/*#include <stdio.h>
int main()
{
     long long a,b,c,d,m1,m2,m3,m4,x;
     scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
     m1=(a%100);
     m2=(b%100);
     m3=(c%100);
     m4=(d%100);
     x=((m1*m2*m3*m4)%100);
     if(x==0||x==1||x==2||x==3|| x==4||x==5||x==6||x==7||x==8||x==9)
         printf("%lld",x);
     else
         printf("%lld",x);
     return 0;
 }
{
    long long a, b, c, d, m1, d1, r1;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    m1 = a * b * c * d;
    d1 = m1 / 100;
    r1 = m1 % 100;
    printf("%d\n", r1);
    return 0;
}*/
#include <stdio.h>
int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  a = a % 100;
  b = b% 100;
  c = c % 100;
  d = d % 100;
  int res = a * b * c * d;
  int x = res % 100;
  if (x < 10)
    printf("0%d", x);
  else
    printf("%d", x);

  return 0;
}

