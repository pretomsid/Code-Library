#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(int a=0; a<=n;a++){
        scanf("%d %d %d",&i,&j,&k);
        a= i+j+k;
        if(a==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
