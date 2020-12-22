#include <stdio.h>
//int 过不了 ， long int 就行
long int
factorial(long int n,long int m){\
    if(m==0||n==0){
        return 1;
    }
    long int sum =1;
    for(int i =n ;i>=n-m+1;i-- ){
        sum *= i ;
    }
    return sum;

}
int 
main (){
    int n = 0;
    long int a[1000]={0};
    scanf("%d",&n);
    for(int i = 0; i< n; i++){
        scanf("%d",&a[i]);
        a[i]=factorial(a[i],a[i]);
    }
    for(int i = 0; i< n ; i++){
        printf("%ld\n",a[i]);
    }
    return 0;
}