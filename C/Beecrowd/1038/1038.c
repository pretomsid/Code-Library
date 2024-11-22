#include<stdio.h>
int main()
{
    double X,Y,price,Total;
    scanf("%lf %lf",&X,&Y);
    Total = price*Y;
        if(X==1)
        {
            price = 4.00;
            Total = price*Y;
            printf("Total: R$ %.2lf\n",Total);
        }
        else if(X==2)
        {
            price = 4.50;
            Total = price*Y;
            printf("Total: R$ %.2lf\n",Total);
        }
        else if(X==3)
        {
            price = 5.00;
            Total = price*Y;
            printf("Total: R$ %.2lf\n",Total);
        }
        else if(X==4)
        {
            price = 2.00;
            Total = price*Y;
            printf("Total: R$ %.2lf\n",Total);
        }
        else if(X==5)
        {
            price = 1.50;
            Total = price*Y;
            printf("Total: R$ %.2lf\n",Total);
        }
        else;
    return 0;
}
