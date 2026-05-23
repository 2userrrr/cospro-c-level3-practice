#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];

    scanf("%s", a);
    scanf("%s", &b);

    if(strcmp(a, b) == 1) 
    {
    printf("%s", a);
    }

    else
    {
        printf("%s", b);
    }

    return 0;
}