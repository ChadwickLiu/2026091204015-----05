#include <stdio.h>
int main(){
    int x,n;
    printf("input x,n£º");
    scanf("%d %d",&x,&n);
    int result = (x >> (n - 1)) & 1;
    result%=2;
    printf("output£º%d",result);
    return 0;
}