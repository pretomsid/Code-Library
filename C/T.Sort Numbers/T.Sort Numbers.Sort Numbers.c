/*#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    if((-10^6<=num1,num2,num3 && num1,num2,num3<=10^6)){
    if (num1 < num2 && num2 > num3)
    {
        if (num1 < num3)
        {
            printf("%d\n%d\n%d", num1, num3, num2);
        }
        else if (num1 > num3)
        {
            printf("%d\n%d\n%d", num3, num1, num2);
        }
    }
    else if (num1 > num2 && num1 > num3)
    {
        if (num2 < num3)
        {
            printf("%d\n%d\n%d", num2, num3, num1);
        }
        else if (num2 > num3)
        {
            printf("%d\n%d\n%d", num3, num2, num1);
        }
    }
    else if (num1 < num3 && num2 < num3)
    {
        if (num1 < num2)
        {
            printf("%d\n%d\n%d", num1, num2, num3);
        }
        else if (num1 > num2)
        {
            printf("%d\n%d\n%d", num2, num1, num3);
        }
    }
    printf("\n\n");
    printf("%d\n%d\n%d", num1, num2, num3);
}
    else;
    return 0;
}*/

#include <stdio.h>

int main(void)
{
  int a, b, c, tmp, hi, mid, lo;
  scanf("%d %d %d", &a, &b, &c);

  if (a > b)
  {
    mid = a;
    lo = b;
  }
  else
  {
    mid = b;
    lo = a;
  }

  if (mid > c)
  {
    hi = mid;
    if (lo > c)
    {
      mid = lo;
      lo = c;
    }
    else
    {
      mid = c;
    }
  }
  else
  {
    hi = c;
  }

  printf("%d\n%d\n%d", lo, mid, hi);
  printf("\n\n");
  printf("%d\n%d\n%d", a, b, c);
  return 0;
}
