#include<stdio.h>
//题我都能不想一次过，太水，不过位与这个概念挺有意思的
int max(int a ,int b){
    if(a>b){
        return a;
    }else {
        return b;
    }
}
int main (){
    int n =0;
    int max_ans = 0;
    int a[50]={0};
    int b[50]={0};
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        b[i]=a[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j){
                continue;
            }
            max_ans=max(max_ans,a[i]&b[j]);
        }
    }
    printf("%d",max_ans);
    return 0;


}