#include <stdio.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    for (i=1;i<=m;i++)
    {
        for(j=m-i;j>0;j--)
            printf(" ");
        for(int l=1; l<=2*i-1 ;l++)
            printf("*");
        printf("\n");
    }
    return 0;
}