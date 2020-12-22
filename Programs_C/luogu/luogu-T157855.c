//2020.11.29有笔记
//组合数做法宣告失败
//#include <stdio.h>
/*int combinatorial_number( int n,int m);
int factorial(int n,int m);
int main(){
    
    int n = 0;
    int a[10]={0};
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[10] = {0};
    for(int ar = 0;ar < n; ar++){
        int sum = 0;
        for(int i = 0;i<=4*a[ar]-2*i;i++){                                ///2020.11.30.21:13我尼玛在求二中选三！！！
            sum+=combinatorial_number(4*a[ar]-2*i,i);                   ///尼玛这，我每次都改了数组的值，然后就尼玛这样了
        }
        b[ar]=sum;
    }
    for(int ar = 0;ar<n;ar++){
         a[ar]=b[ar];
    }
    //下方两个for错了，按原来想法写的，博哥纠正了我的错误
    for(int num = 0;num < n;num++) {
        int num_sum =0;
        for(int i= 0;i<=2*a[num];i++){
            num_sum += combinatorial_number(4*a[num],2*i);
        }
        a[num]=num_sum;
    }
    for(int order = 0;order<n;order++){  //数组序号
        int sum = 0;
        for(int i = 0;2*i<=a[order];i++){
            sum+=combinatorial_number(2*a[order]+i,2*i);
        }
        a[order]=sum;
    }
    for(int i = 0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
int combinatorial_number( int n,int m){  //m from n, same in down
    int sum =0;
    if(m==0){
        return 1;
    }
    sum =factorial(n,m)/factorial(m,m);
    return sum;
    
}
int factorial(int n,int m){\
    if(m==0||n==0){
        return 1;
    }
    int sum =1;
    for(int i =n ;i>=n-m+1;i-- ){
        sum *= i ;
    }
    return sum;

}*/


#include<stdio.h>
int fib(int n ){
    int fib[40]={0};
    fib[0]=1;
    fib[1]=2;
    for(int i = 2;i<40;i++){          //注意数组下标！！还是容易混淆
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n-2];
}
int main(){
    int n = 0;
    int a[10]={0};
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        printf("%d\n",fib(4*a[i]));
    }
    return 0;


}