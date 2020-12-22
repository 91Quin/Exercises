#include <stdio.h>
#include<math.h>
int prime();
int main(int i)
{
    scanf("%d",&i);
    printf("%d",prime(i));
    return 0;
}
int prime(int p)
{
    if(p>2)
    {
        int b;
        for (int j  = 2; j <= sqrt(p); j++) //3的情况没考虑进去，未修改
        {
            if ( p%j == 0 )
            {
                return 0;
            }
            else
            {
                b = 1;
            }
            
        }
        return b;
    }
    if (p<=1)
    {
        return 0;
    }
    if(p==2)
    {
        return 1;
    }
}
