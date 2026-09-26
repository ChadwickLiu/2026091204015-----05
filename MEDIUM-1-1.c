#include <stdio.h>
int main(){
    int x,n;
    printf("x,n·Ö±ğÎª£º");
    scanf("%d %d",&x,&n);
    int result=(x>>(n-1));
    result%=2;
    printf("%d",result);
    return 0;
}