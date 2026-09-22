#include <stdio.h>
int abc(int x,int n,int t)
{
    x=x&~(1<<(n-1));
    x=x|(t<<(n-1));
    return x;
}

int main()
{
    int x,n,t;
    scanf("%d %d %d",&x,&n,&t);
    int result=abc(x,n,t);
    printf("½á¹ûÊÇ%d",result);
    return 0;
}