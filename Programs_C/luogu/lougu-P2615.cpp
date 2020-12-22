/*先填1，即填（2-1）
再填（3-1）
再填（4-1）
*/
//二维数组
#include<stdio.h>
void print_array(int n  );
void operate_array(int n);
void operate_array_inner( int line , int list,int i ,int n);
int a[39][39]={0};
int line ,list =0;
int i =2 ;
int main(){
    int n =0;
    scanf("%d",&n);
    operate_array(n);
}
void operate_array(int n){
     
    a[0][(n-1)/2]=1;
    list = (n-1)/2;
    for(; i<=n*n;i++){//the reason of 'i=2' is that the beginning a[mid][0] has been given the value 1
        if ( line == 0  && list != n-1){                     //mention!! array begin from 0 end on n-1!!
        a[n-1][list+1]=i;
        list ++;
        line=n-1;
    }else if( list == n-1 && line != 0){
        a[line-1][0]=i;
        line--;
        list=0;
    }else if( line == 0 && list == n-1 ){
        a[line+1][list]=i;
        line++;
    }else if (a[line-1][list+1]==0 ){
            a[line-1][list+1]=i;
            line--;
            list++;
    }else{
            a[line+1][list]=i;
            line++;
        }
    }
    print_array(n);
}
/*void operate_array_inner( int line , int list,int i ,int n){  //now ,line and list should be line and list of K
    if ( line == 0  && list != n-1){                     //mention!! array begin from 0 end on n-1!!
        a[n-1][list+1]=i;
        printf("%d %d\n",line, list);
        list ++;
        line=n-1;
    }else if( list == n-1 && line != 0){
        a[line-1][0]=i;
        line--;
        list=0;
    }else if( line == 0 && list == n-1 ){
        a[line-1][list]=i;
        line--;
    }else{
        if (a[line-1][list+1]==0 ){
            a[line-1][list+1]=i;
            line--;
            list++;
        }else{
            a[line-1][list]=i;
            line--;
        }
    }
}*/
void print_array(int n  ){
    for(int l1=0;l1<n;l1++){
        for (int l2=0;l2<n;l2++ )
        {
            printf("%d ",a[l1][l2]);
        }
        printf("\n");
    }
}
