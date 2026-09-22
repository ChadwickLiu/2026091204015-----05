#include <stdio.h>

int main()
{
    int x;
    int result;
    scanf("%d",&x);
    result=x&-x;
    printf("%d",result);

    return 0;
}