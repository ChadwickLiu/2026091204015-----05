#include <stdio.h>

// 请补全以下代码
int hasCommonChar(const char *s1, const char *s2) {
    int mask1 = 0;
    int mask2 = 0;
    int i;

    for (i = 0; s1[i] != 0; i++) {
        mask1 |= (1 << (s1[i] - 'a'));
    }

    for (i = 0; s2[i] != 0; i++) {
        mask2 |= (1 << (s2[i] - 'a'));
    }

    return (mask1 & mask2) != 0;
}
    
    int main() {
    char s1[100];
    char s2[100];

    scanf("%s,%s", s1, s2);
    printf("输出%d\n", hasCommonChar(s1, s2));

    return 0;
}