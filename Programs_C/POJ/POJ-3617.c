#include <stdio.h>
//djq tql yyds
#define MAX_N 2000
int a[MAX_N] ={0}; 
void judge(int i,int n);
char judge_2(int i ,int n);
int i =0;
int N,n = 0;
int main(){
    
    scanf("%d",&n);
    N = n;
    for(int i2 = 0;i2<n;i2++){
        a[i2]=getchar();
        if(a[i2]==' '||a[i2]=='\n'){
            a[i2]=0;
            i2--;
        }
    }
    n=n-1;
    judge(i,n);
    return 0;

}
void judge(int i,int n){
    int num = 0;
    for(int s = 0 ;s<N-1;s++ ){
        
        if(a[i]<a[n]){
            putchar(a[i]);
            num++;
            a[i]=0;
            i++;
        }else if(a[i]>a[n]){
            putchar(a[n]);
            num++;
            a[n]=0;
            n--;
        }else{              
            
            switch (judge_2(i,n))
            {
            case 'i':
                putchar(a[i]);
                num++;
                i++;
                break;
            case 'n':
                putchar(a[n]);
                num++;
                a[n]=0;
                n--;
                break;
            }
        }
        if(num==80){
            printf("\n");
            num = 0;
        }

    }
    putchar(a[n]);
    printf("\n");
}
char judge_2(int i ,int n){
    if(a[i+1]<a[n-1]){
        return 'i';
    }else
    if( a[i+1]>a[n-1]){
        return 'n';
    }else return judge_2(i+1,n-1);/*{
        
        switch (judge_2(i+1,n-1))
            {
            case 'i':v
                return 'i';
            case 'n':
                return 'n';
            }
    }*/
}
