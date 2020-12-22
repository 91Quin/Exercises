#include <stdio.h>
int main (){
    char a[102]={0};
    int num = 0;
    scanf("%s",&a);
    for(int i = 0; a[i]!='\0'; i++){
        if(a[i] <= 'z'&& a[i] >= 'a'){
            a[i] -= ('z'-'Z');
        }
    }
    printf("%s",a);
    return 0;

}