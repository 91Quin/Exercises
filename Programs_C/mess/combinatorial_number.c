#include <stdio.h>
#include <math.h>
double fact( int i);
int main(){
    int m,n=0;
    scanf("%d %d",&m,&n);
    double up1,bottom1,bottom2=0;
    double  Sum =0;
    up1 = fact(n);
    bottom1=fact(m);
    bottom2=fact(n-m);
    Sum = up1/(bottom1*bottom2);
    printf("result = %.0lf",Sum);
    return 0;
    
}

double fact(int i ){     //函数类型应与返回类型一致
    double sum=1;   
    for(;i>=1;i--){
        sum = sum*i;
    }
    return sum;
}

/*#include<stdio.h>
int main(){
    double i =10;
    int sum=1;
    for(;i>=1;i--){
        sum = sum*i;
    }
    printf("%d",sum);
    return 0;
}
*/