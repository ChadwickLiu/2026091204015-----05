#include <stdio.h>
int main(){
    int x,n;
    printf("x,n分别为：");
    scanf("%d %d",&x,&n);
    int result = (x >> (n - 1)) & 1;
    result%=2;
    printf("x的第n位是：%d",result);
    return 0;
}