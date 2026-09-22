#include <stdio.h>
int main(){
    int x,n;
    printf("x，n的值分别为：");
    scanf("%d %d",&x,&n);
    int result=(x>>(n-1));
    result%=1;
    printf("x的二进制的第n位是%d",result);


    
    return 0;
}