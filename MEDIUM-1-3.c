#include <stdio.h>

int main()
{
    int x;
    int result;
    scanf("%d",&x);
    result=x&-x;
    printf("½á¹ûÊÇ£º%d",result);

    return 0;
}