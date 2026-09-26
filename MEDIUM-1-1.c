#include <stdio.h>
int main(){
    int x,n;
    printf("input x,n");
    scanf("%d %d",&x,&n);
    int result = (x >> (n - 1)) & 1;
    result%=2;
    printf("output%d",result);
    return 0;
}