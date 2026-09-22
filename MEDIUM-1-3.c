#include <stdio.h>

int main()
{
    int x;
    int result;
    scanf("%d",&x);
    result=x&-x;
    printf("½á¹ûÊÇ%d",result);

    return 0;
}