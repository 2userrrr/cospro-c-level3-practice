#include <stdio.h>
#include <string.h>

int main()
{
    char n[20];
    scanf("%s", n);

    for(int i = strlen(n); i>=0; i--)
    {
        printf("%c", n[i]);
    }

    return 0;
}