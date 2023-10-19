#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int cnt[100000] = {0};
    for (i = 0; i < n; i++)
    {
        int value = array[i];
        cnt[value]++;
    }
    for (i = 1; i <= m; i++)
    {
        printf("%d\n", cnt[i]);
    }
    return 0;
}