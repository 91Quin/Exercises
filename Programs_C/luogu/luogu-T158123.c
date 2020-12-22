#include<stdio.h>
//模拟
int main(){
    int n,m = 0;
    int time = 0;
    int students[10000]={0};
    int water[100]=0;
    scanf("%d %d",&n,&m);
    for(int i =0;i<n;i++){
        scanf("%d",&students[i]);
    }
    for( int i =0;i<m;i++){
        water[i]=students[i];
    }
    
    for(int l =0;l<m;l++){
        for(int i =0;water[l]>0;i++){
            water[i]--;
            time++;
        }
    }
}
//找出一排接水的人中数值最小的一个，增加相应的时间，在它结束后，顺序地下一个补上，然后再找最小的那个，如是重复。
#include <stdio.h>
int main (){
    
}
int find_min(int *p,int m){
    int min =0 ;
    for(int i = 0;i < m;i++){
        
    }

}