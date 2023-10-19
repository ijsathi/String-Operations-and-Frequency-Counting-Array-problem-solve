#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
    int sum = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        sum += a[i] - '0';
    }

    printf("%d ", sum);
    return 0;
}