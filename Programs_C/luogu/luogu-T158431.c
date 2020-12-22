#include<stdio.h>
int main (){
    int m,n = 0;
    scanf("%d %d",&m,&n);
    if(n%2!=0){
        printf("white");
    }else {
        printf("black");
    }
    return 0;
}