#include<stdio.h>
#include<math.h>
double distance(double i,double j,double k,double l);
int main(){
    double i , j,k,l,m,n=0;
    scanf("%lf %lf %lf %lf %lf %lf",&i,&j,&k,&l,&m,&n);   //哭了，引以为戒，基本格式要搞清楚
    double  dis1=distance(i,j,k,l);
    double  dis2=distance(i,j,m,n);
    double  dis3=distance(k,l,m,n);
    double dis_sum = dis1+dis2+dis3;
    printf("%.2lf",dis_sum);
    //printf("%d",sizeof(float));
    return 0;

}
double  distance(double i,double j,double k,double l){
    return sqrt( pow((i-k),2)+pow((j-l),2));
} 