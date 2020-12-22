#include <stdio.h>
//int mk();
int sum();
int main (){
    int l,m,b,e=0;
    int a[10000]={0};
    for(int i = 0;i<10000;i++){
        a[i]=1;
    }
    scanf("%d %d",&l,&m);
    for(int i = 0;i<m;i++){
        scanf("%d %d",&b,&e);
        for(int i = b;i<=e;i++){
            a[i]=0;
    }
    }
    printf("%d",sum(a,l));
    return 0;
}
/*int mk
(int a[10000],int b,int e){
    for(int i = b-1;i<=e-1;i++){
        a[i]={0};
    }
    return a[];
}*/
int sum(int a[],int l){
    int i = 0;
    for(int u =0 ; u<=l;u++){
        if(a[u]!=0)
        i++;
    }
    return i;
}