#include <stdio.h>
int judge(int s );
int main(){
    int n =0;
    scanf("%d",&n);
    int a[n]={0};
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        int c =0;
        for(int s =0;s<i;s++){
            if(a[s]<a[i])
                c++;
    }
    printf("%d ",c);
    }
    return 0;
}
