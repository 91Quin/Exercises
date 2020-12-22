///测试函数中出现没有划分的情况的返回值
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
}
///没划分的话，输入啥返回啥