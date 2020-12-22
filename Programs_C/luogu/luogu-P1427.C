#include <stdio.h>
int main(){
    long long int a[99]={0};
    int i =0;
    for(;;i++){
        scanf("%d",&a[i]);
        if(a[i]==0)
        break;
    }
    for(i--;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}