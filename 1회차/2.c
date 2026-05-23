#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    if(strlen(str1)>strlen(str2))
    {
        printf("%s", str1);
    }

    else
    {
        printf("%s", str2);
    }
        return 0;
}