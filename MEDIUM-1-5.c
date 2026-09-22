#include <stdio.h>

int ans = 0;     
int limit;      

void dfs(int row, int ld, int rd) {
    if (row == limit) {
        ans++;
        return;
    }

    int available = limit & ~(row | ld | rd);

    while (available) {
        int p = available & -available;   
        available -= p;                 
        dfs(row | p, (ld | p) << 1, (rd | p) >> 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);           
    limit = (1 << n) - 1;         
    dfs(0, 0, 0);                 
    printf("%d\n", ans);         
    return 0;
}