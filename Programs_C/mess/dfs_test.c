#include <stdio.h>
#include <stdbool.h>
int n ,k= 0;
int a[1000000]={0};
bool dfs(int i ,int sum);
void print();
int main(){
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    print();
    return 0;
}
bool dfs(int i ,int sum){
    if(i == n)
        return sum==k;
    if (dfs(i+1,sum))
        return true;
    if (dfs(i+1,sum+a[i]))
        return true;
    return false;
}
void print(){
    if(dfs(0,0))
        printf("Yes!");
    else  printf("No!");
}