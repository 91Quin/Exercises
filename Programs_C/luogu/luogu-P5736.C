#include<stdio.h>
#include<math.h>
int n = 0;
int prime(int p);
int main(){
    scanf("%d",&n);
    int a[n-1]={0};
    for(int i =0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        if(prime(a[i])==1)
            printf("%d ",a[i]);
    }
    return 0;
}
int prime(int p)
{
    if(p>2)
    {
        int b;
        for (int j  = 2; j < p; j++)
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
