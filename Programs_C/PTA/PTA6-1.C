#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
int prime(int p)
{
    if(p>=2)
    {
        int b;
        for (int j  = 2; j <= sqrt(p); j++)
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
    else
    {
        if (p <= 1)
        return 0;
    }
    
}
int PrimeSum( int m, int n)
{
    int sum = 0;
    for (; m<=n; m++)
    {
        if(prime(m)==1)
        sum += m;
    }
    return sum;
}

///函数对输入的值，若无操作，输入啥返回啥