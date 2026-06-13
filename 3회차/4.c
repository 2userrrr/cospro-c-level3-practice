#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];

    scanf("%s", a);
    scanf("%s", b);

    if(strcmp(a, b) == 0)
    printf("YES");

    else
    printf("NO");

    return 0;
}