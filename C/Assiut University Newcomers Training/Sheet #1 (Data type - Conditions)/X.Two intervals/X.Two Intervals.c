#include <stdio.h>
int main()
{
    double l1, l2, r1, r2;
    scanf("%lf%lf%lf%lf", &l1, &r1, &l2, &r2);
    if (l1 <= r1 && l2 <= r2)
    {
        if (l1 > l2 && r1 > r2 && l1 > r2 && l2 < r1)
        {
            printf("-1\n");
        }
        else if (l2 > l1 && r2 > r1 && l2 > r1 && r2 > l1)
        {
            printf("-1\n");
        }
        else if (l2 <= l1 && r2 <= r1)
        {
            printf("%.0lf %.0lf", l1, r2);
        }
        else if (l1 <= l2 && r1 <= r2)
        {
            printf("%.0lf %.0lf", l2, r1);
        }
        else if (l2 <= l1 && r1 <= r2)
        {
            printf("%.0lf %.0lf", l1, r1);
        }
        else if (l1 <= l2 && r2 <= r1)
        {
            printf("%.0lf %.0lf", l2, r2);
        }
        else
        {
            printf("-1\n");
        }
    }
    else;
    return 0;
}
